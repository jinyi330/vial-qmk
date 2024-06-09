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

#define ____ KC_NO

#include "quantum.h"

#define LAYOUT_75_ansi( \
 	 K000, K001, K002, K003, K004, K005, K006,       \
	K010, K011, K012, K013, K014, K015,              \
	K020,       K022, K023, K024, K025, K026,        \
	K030,       K032, K033, K034, K035, K036,        \
	K040,       K042, K043, K044,                     \
	      K051, K052, K053, K054, K055, K056, K057,\
	K060, K061, K062, K063, K064, K065, K066, K067,\
	K070, K071, K072, K073, K074, K075,       K077,\
	K080, K081, K082, K083, K084, K085, K086, K087,\
	K090,       K092, K093, K094, K095, K096, K097\
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  KC_NO }, \
	{ K010,  K011,  K012,  K013,  K014,  K015, KC_NO,  KC_NO }, \
	{ K020,  KC_NO, K022,  K023,  K024,  K025,  K026,  KC_NO }, \
	{ K030,  KC_NO, K032,  K033,  K034,  K035,  K036,  KC_NO }, \
	{ K040,  KC_NO, K042,  K043,  K044,  KC_NO, KC_NO, KC_NO }, \
	{ KC_NO,  K051,  K052,  K053,  K054,  K055,  K056,  K057 }, \
	{ K060,  K061,  K062,  K063,  K064,  K065,  K066,  K067 }, \
	{ K070,  K071,  K072,  K073,  K074,  K075,  KC_NO,  K077 }, \
	{ K080,  K081,  K082,  K083,  K084,  K085,  K086,  K087 }, \
	{ K090,  KC_NO,  K092,  K093,  K094,  K095,  K096,  K097 }  \
}

