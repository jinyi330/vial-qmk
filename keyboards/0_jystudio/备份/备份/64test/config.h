/* Copyright 2020 zvecr <git@zvecr.com>
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

/* USB Device descriptor parameter */
//#define VENDOR_ID       0x04D8
//#define PRODUCT_ID      0xECE9
//#define DEVICE_VER      0x0001

// #define SERIAL_DEBUG

#define MATRIX_ROWS 10
#define MATRIX_ROWS_PER_SIDE (MATRIX_ROWS / 2)
#define MATRIX_COLS 8

#define MATRIX_COL_PINS { A5,A6,A7,B0,B1,B10,B11,B12}
#define MATRIX_ROW_PINS { B15, B14, B13, A1, B5  }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define MATRIX_IO_DELAY 5

#define SPLIT_HAND_PIN B9

#define SOFT_SERIAL_PIN B8

// #define SERIAL_USART_FULL_DUPLEX     // Enable full duplex operation mode.
// #define SERIAL_USART_DRIVER SD1

// #define SELECT_SOFT_SERIAL_SPEED 5

#define DEBOUNCE 5

//#define LOCKING_SUPPORT_ENABLE
//#define LOCKING_RESYNC_ENABLE

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
// //#define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT

// #define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 3000
// #define SPLIT_MAX_CONNECTION_ERRORS 10
// #define SPLIT_CONNECTION_CHECK_TIMEOUT 500

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
