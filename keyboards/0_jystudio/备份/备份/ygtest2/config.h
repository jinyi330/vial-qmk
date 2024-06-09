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
#define MATRIX_ROWS 4
#define MATRIX_COLS 10

/* key matrix pins */
#define MATRIX_ROW_PINS { B6, B7, B1, B12 }
#define MATRIX_COL_PINS { A3,A4,A5,A6,A7,A15,B3,B15,B14,B10 }

// Thumbstick settings
#define ANALOG_JOYSTICK_X_AXIS_PIN A1
#define ANALOG_JOYSTICK_Y_AXIS_PIN A2

#ifndef SCROLLING_LAYER
    #define SCROLLING_LAYER 1
#endif
#ifndef TAPPING_LAYER
    #define TAPPING_LAYER 2
#endif
#ifndef CURSOR_SPEED
    #define CURSOR_SPEED 70
#endif
#ifndef SCROLL_SPEED
    #define SCROLL_SPEED 25
#endif
#ifndef SCROLL_DELAY_MS
    #define SCROLL_DELAY_MS 70
#endif

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Forcing to use NKRO instead 6KRO */
#define FORCE_NKRO

/* Because we use vibl, this has to be defined here instead of under keymaps/vial/config.h */
#define VIAL_KEYBOARD_UID {0x07, 0x60, 0x3E, 0x60, 0x40, 0x62, 0xA3, 0xD4}