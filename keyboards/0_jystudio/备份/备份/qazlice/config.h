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
#define MATRIX_ROWS 4
#define MATRIX_COLS 10

/* key matrix pins */
#define MATRIX_ROW_PINS { A2,A1,A3,A4 }
#define MATRIX_COL_PINS { B12,B13,B14,B15,A8,A5,A6,A7,B0,B1 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Forcing to use NKRO instead 6KRO */
#define FORCE_NKRO

/* Because we use vibl, this has to be defined here instead of under keymaps/vial/config.h */
#define VIAL_KEYBOARD_UID {0x07, 0x30, 0xAE, 0x60, 0x00, 0x62, 0xF0, 0xD4}

#define ENCODERS_PAD_A { A15,B4 }
#define ENCODERS_PAD_B { B3,B5 }