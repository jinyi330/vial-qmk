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

#include "config_common.h"


/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 12

/* key matrix pins */
#define MATRIX_ROW_PINS { A4,A5,A6,A7,B0 }
#define MATRIX_COL_PINS { B1,B10,B11,B12,B13,A15,B3,B4,B5,B6,B7,B8 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Forcing to use NKRO instead 6KRO */
#define FORCE_NKRO

/* Because we use vibl, this has to be defined here instead of under keymaps/vial/config.h */
#define VIAL_KEYBOARD_UID {0x07, 0x37, 0x3E, 0x68, 0x00, 0x61, 0xA3, 0xD4}