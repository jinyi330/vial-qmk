#pragma once

#include_next <mcuconf.h>

// #undef STM32_PWM_USE_TIM3
// #define STM32_PWM_USE_TIM3 TRUE

// // Used for EEPROM
// #undef STM32_SPI_USE_SPI0
// #define STM32_SPI_USE_SPI0 TRUE

#undef STM32_SERIAL_USE_USART1
#define STM32_SERIAL_USE_USART1 TRUE
// #undef RP_SIO_USE_UART0
// #define RP_SIO_USE_UART0 TRUE

#undef  STM32_PLLXTPRE
#define STM32_PLLXTPRE STM32_PLLXTPRE_DIV2
