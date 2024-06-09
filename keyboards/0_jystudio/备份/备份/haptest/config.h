/* Copyright 2022 DOIO
 * Copyright 2022 HorrorTroll <https://github.com/HorrorTroll>
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
#define MATRIX_ROWS 3
#define MATRIX_COLS 10

/* key matrix pins */
#define MATRIX_ROW_PINS { A1, A8, B12 }
#define MATRIX_COL_PINS { A3,A4,A5,A6,A7,A15,B3,B15,B14,B1 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Forcing to use NKRO instead 6KRO */
#define FORCE_NKRO

/* Because we use vibl, this has to be defined here instead of under keymaps/vial/config.h */
#define VIAL_KEYBOARD_UID {0x07, 0x30, 0x3E, 0x60, 0x00, 0x62, 0xA3, 0x14}

//#define SOLENOID_PIN_ACTIVE_LOW
//#define SOLENOID_ACTIVE true
/*电磁阀功能定义*/
// #define SOLENOID_ACTIVE true       /*电磁阀开启*/
// #define SOLENOID_PINS {B10, B6}
// #define SOLENOID_DEFAULT_DWELL 100  /*默认通电时长*/
// #define NO_HAPTIC_MOD              /*使用FN时不触发*/
// #define SOLENOID_RANDOM_FIRE
// #define SOLENOID_PINS_ACTIVE_STATE { high,  low }
#define SOLENOID_ACTIVE true       /*电磁阀开启*/
#define SOLENOID_PIN B11
#define SOLENOID_DEFAULT_DWELL 100  /*默认通电时长*/
#define NO_HAPTIC_MOD              /*使用FN时不触发*/

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0