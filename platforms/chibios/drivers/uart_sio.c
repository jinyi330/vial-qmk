// Copyright 2024 Stefan Kerkmann (@KarlK90)
// Copyright 2021 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include "uart.h"

#if defined(MCU_RP)
// 38400 baud, 8 data bits, 1 stop bit, no parity, no flow control
static SIOConfig sioConfig = {
    .baud      = SIO_DEFAULT_BITRATE,
    .UARTLCR_H = (UART_UARTLCR_H_WLEN_8BITS | UART_UARTLCR_H_FEN),
    .UARTCR    = 0U,
    .UARTIFLS  = (UART_UARTIFLS_RXIFLSEL_1_8F | UART_UARTIFLS_TXIFLSEL_1_8E),
    .UARTDMACR = 0U,
};
#else
static SIOConfig sioConfig = {
    .baud  = SIO_DEFAULT_BITRATE,
#    if defined(MCU_STM32) && defined(USE_USARTV3)
    .presc = USART_PRESC1,
#    endif
    .cr1   = UART_CR1,
    .cr2   = UART_CR2,
    .cr3   = UART_CR3,
};
#endif

void uart_init(uint32_t baud) {
    static bool is_initialised = false;

    if (is_initialised) {
        return;
    }
    is_initialised = true;

    sioConfig.baud = baud;

#if defined(USE_GPIOV1)
    palSetLineMode(UART_TX_PIN, UART_TX_PAL_MODE);
    palSetLineMode(UART_RX_PIN, UART_RX_PAL_MODE);
#else
    palSetLineMode(UART_TX_PIN, PAL_MODE_ALTERNATE(UART_TX_PAL_MODE) | PAL_OUTPUT_TYPE_PUSHPULL | PAL_OUTPUT_SPEED_HIGHEST);
    palSetLineMode(UART_RX_PIN, PAL_MODE_ALTERNATE(UART_RX_PAL_MODE) | PAL_OUTPUT_TYPE_PUSHPULL | PAL_OUTPUT_SPEED_HIGHEST);
#endif

    sioStart(&UART_DRIVER, &sioConfig);
}

void uart_write(uint8_t data) {
    chnPutTimeout(&UART_DRIVER, data, TIME_INFINITE);
}

uint8_t uart_read(void) {
    msg_t result = chnGetTimeout(&UART_DRIVER, TIME_INFINITE);

    if (sioHasRXErrorsX(&UART_DRIVER)) {
        sioGetAndClearErrors(&UART_DRIVER);
    }

    return (uint8_t)result;
}

void uart_transmit(const uint8_t *data, uint16_t length) {
    chnWrite(&UART_DRIVER, data, length);
}

void uart_receive(uint8_t *data, uint16_t length) {
    chnRead(&UART_DRIVER, data, length);

    if (sioHasRXErrorsX(&UART_DRIVER)) {
        sioGetAndClearErrors(&UART_DRIVER);
    }
}

bool uart_available() {
    return !sioIsRXEmptyX(&UART_DRIVER);
}

void uart_init_iface(uint32_t baud) {
    static bool is_initialised = false;

    if (!is_initialised) {
        is_initialised = true;


        serial_config.baud = baud;

#        if defined(MCU_STM32) /* STM32 MCUs */
#            if defined(USE_GPIOV1)
        palSetLineMode(SD_TX_PIN, PAL_MODE_ALTERNATE_PUSHPULL);
        palSetLineMode(SD_RX_PIN, PAL_MODE_INPUT);
#            else
        palSetLineMode(SD_TX_PIN, PAL_MODE_ALTERNATE(SERIAL_USART_TX_PAL_MODE) | PAL_OUTPUT_TYPE_PUSHPULL | PAL_OUTPUT_SPEED_HIGHEST);
        palSetLineMode(SD_RX_PIN, PAL_MODE_ALTERNATE(SERIAL_USART_RX_PAL_MODE) | PAL_OUTPUT_TYPE_PUSHPULL | PAL_OUTPUT_SPEED_HIGHEST);
#            endif

#        elif defined(MCU_RP) /* Raspberry Pi MCUs */
// #       pragma message "RP2040 compilation!!!!!!!!!!!!!!"
        palSetLineMode(SD_TX_PIN, PAL_MODE_ALTERNATE_UART);
        palSetLineMode(SD_RX_PIN, PAL_MODE_ALTERNATE_UART);
#        else
#            pragma message "usart_init: MCU Familiy not supported by default, please supply your own init code by implementing usart_init() in your keyboard files."
#        endif

    sioStart(serial_driver, &serial_config);
    sioStartOperation(serial_driver, &serial_usart_operation);
    }
}


void uart_write_iface(uint8_t data) {

    // serial_transport_driver_clear();

    osalSysLock();
    sioPutX(serial_driver, (uint_fast16_t)data);
    osalSysUnlock();
    // chnWriteTimeout(serial_driver, &data, 1,TIME_MS2I(SERIAL_USART_TIMEOUT));
    // chnWrite(serial_driver, &data, 1);
}

uint8_t uart_read_iface(void) {
    // uint8_t res;
    osalSysLock();
    msg_t res = sioGetX(serial_driver);
    osalSysUnlock();
    // chnReadTimeout(serial_driver, &res, 1, TIME_MS2I(SERIAL_USART_TIMEOUT));
    // chnRead(serial_driver, &res, 1);
    return res;
}

void uart_transmit_iface(const uint8_t *d, uint16_t length) {
    // sdWrite(&SERIAL_DRIVER, data, length);
    // chnRead(serial_driver, data, length) 
 }   

void uart_receive_iface(uint8_t *data, uint16_t length) {
    // sdRead(&SERIAL_DRIVER, data, length);
}

bool uart_available_iface(void) {
    // bool r;
    // osalSysLock();
    // r = !sioIsRXEmptyX(serial_driver);
    // osalSysUnlock();
    // uprintf("not empty: %d\n",r);
    msg_t r = sioSynchronizeRX(serial_driver,TIME_MS2I(20));
    uprintf("not empty: %d\n",(int)r);
    // return 0;
    return !sioIsRXEmptyX(serial_driver);
    // return !sdGetWouldBlock(&SERIAL_DRIVER);
}
