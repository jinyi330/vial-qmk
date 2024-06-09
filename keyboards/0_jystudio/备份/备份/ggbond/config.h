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
#define MATRIX_COLS 12

/* key matrix pins */
#define MATRIX_ROW_PINS { A2,A1,A4,A10 }
#define MATRIX_COL_PINS { B12,B13,B14,B15,A8,A5,A6,A7,B0,B1,B6,B7 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Forcing to use NKRO instead 6KRO */
#define FORCE_NKRO

#define ENCODERS_PAD_A { A15,B4 }
#define ENCODERS_PAD_B { B3,B5 }

/* Because we use vibl, this has to be defined here instead of under keymaps/vial/config.h */
#define VIAL_KEYBOARD_UID {0x17, 0x30, 0xAE, 0x64, 0x00, 0x62, 0xF0, 0xD4}


#define SOLENOID_ACTIVE true       /*电磁阀开启*/
#define SOLENOID_PIN B10
#define SOLENOID_DEFAULT_DWELL 100  /*默认通电时长*/
#define NO_HAPTIC_MOD              /*使用FN时不触发*/

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

//Data pin for the 3 RGB LEDs
#define RGB_DI_PIN A3
#define WS2812_DI_PIN A3
//Number of RGB LEDs
#define RGBLED_NUM 16

#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLIGHT_EFFECT_CHRISTMAS_INTERVAL 40
#define RGBLIGHT_EFFECT_CHRISTMAS_STEP 2


// #ifdef RGB_MATRIX_ENABLE
//     /* RGB Matrix config */
//     #define RGBLED_NUM 16
//     #define RGB_MATRIX_LED_COUNT 16
//     #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
//     #define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
//     #define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_CYCLE_UP_DOWN
// #    define RGB_DISABLE_WHEN_USB_SUSPENDED
// #    define RGB_MATRIX_KEYPRESSES


// /* RGB Matrix effect */
// #define ENABLE_RGB_MATRIX_ALPHAS_MODS
// #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
// #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
// #define ENABLE_RGB_MATRIX_BREATHING
// // #define ENABLE_RGB_MATRIX_BAND_SAT
// // #define ENABLE_RGB_MATRIX_BAND_VAL
// // #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
// // #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
// // #define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
// // #define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
// // #define ENABLE_RGB_MATRIX_CYCLE_ALL
// // #define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
// #define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
// #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
// #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
// #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
// #define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
// #define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
// #define ENABLE_RGB_MATRIX_DUAL_BEACON
// #define ENABLE_RGB_MATRIX_RAINBOW_BEACON
// #define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
// #define ENABLE_RGB_MATRIX_RAINDROPS
// #define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
// #define ENABLE_RGB_MATRIX_HUE_BREATHING
// // #define ENABLE_RGB_MATRIX_HUE_PENDULUM
// // #define ENABLE_RGB_MATRIX_HUE_WAVE
// // #define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
// // #define ENABLE_RGB_MATRIX_PIXEL_RAIN
// #define ENABLE_RGB_MATRIX_TYPING_HEATMAP
// #define ENABLE_RGB_MATRIX_DIGITAL_RAIN
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
// #define ENABLE_RGB_MATRIX_SPLASH
// #define ENABLE_RGB_MATRIX_MULTISPLASH
// #define ENABLE_RGB_MATRIX_SOLID_SPLASH
// #define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
// #endif
