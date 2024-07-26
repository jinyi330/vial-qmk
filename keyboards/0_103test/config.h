#pragma once


/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

#define ONESHOT_TIMEOUT 500

#define SERIAL_DEBUG

// #define SERIAL_DRIVER uart0

// #define SERIAL_DRIVER SD1

// #define SD_TX_PIN A9
// #define SD_RX_PIN A10

#define SERIAL_DRIVER SD1
#define SERIAL_USART_TX_PIN A9
#define SERIAL_USART_RX_PIN A10

#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL
