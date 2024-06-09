/* Copyright 2017 Mattia Dal Ben
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once


/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
//#define BACKLIGHT_LEVELS 3

#define ONESHOT_TIMEOUT 500

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
// #define SERIAL_DRIVER uart0

// #define SERIAL_DRIVER SIOD0
// #define SIO_USE_SYNCHRONIZATION 1
// #define SD_TX_PIN GP0
// #define SD_RX_PIN GP1
#define SERIAL_DEBUG

#define WS2812_PIO_USE_PIO1

// #define SERIAL_USART_FULL_DUPLEX
// // #define SERIAL_USART_PIN_SWAP
// #define SERIAL_USART_TX_PIN GP0
// #define SERIAL_USART_RX_PIN GP1

#define SERIAL_DRIVER uart0

// #define SERIAL_DRIVER SIOD0
// #define SIO_USE_SYNCHRONIZATION 1
#define SD_TX_PIN GP0
#define SD_RX_PIN GP1

#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP22
#define SPI_MOSI_PIN GP23
#define SPI_MISO_PIN GP20


// Display Configuration
#define OLED_CS_PIN GP27
#define OLED_DC_PIN GP26
#define OLED_RST_PIN GP21