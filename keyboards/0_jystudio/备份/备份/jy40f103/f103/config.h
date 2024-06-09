/* Copyright 2021 JasonRen(biu)
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
#define MATRIX_COLS 12

//                        0    1    2    3    4    5    6    7    8    9    10   11
#define MATRIX_COL_PINS \
    { A5,A6,A7,B0,B1,A15,B3,B4,B5,B6,B7,B8 }
#define MATRIX_ROW_PINS \
    { A1,A2,A3,A4 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
