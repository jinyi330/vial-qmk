// Copyright 2023 zzeneg (@zzeneg)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_number {
    // clang-format off
    _QWERTY = 0,
    _GAME,
    _NAV,
    _NUMBER,
    _SYMBOL,
    _FUNC,
    _SYS
    // clang-format on
};

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)

// Right-hand home row mods
#define HOME_J RSFT_T(KC_J)
#define HOME_K RCTL_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)

// bottom mods
#define SYM_SPC LT(_SYMBOL, KC_SPC)
#define NUM_TAB LT(_NUMBER, KC_TAB)
#define FUNC_ESC LT(_FUNC, KC_ESC)
#define FUNC_ENT LT(_FUNC, KC_ENT)
#define NAV_BSPC LT(_NAV, KC_BSPC)
#define RALT_DEL LALT_T(KC_DEL)

// game layer mods
#define LALT_Q LALT_T(KC_Q)
#define LSFT_MINS LSFT_T(KC_MINS)
#define LCTL_ESC LCTL_T(KC_ESC)
#define LGUI_QUOT LGUI_T(KC_QUOT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* QWERTY
     *               .---------------------------.                    .---------------------------.
     *               |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |
     * .------+------+------+------+------+------|                    |------+------+------+------+------+------.
     * |  Q   |   A  |   S  |   D  |   F  |   G  |                    |   H  |   J  |   K  |   L  |   P  |  ;   |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |  -   |   Z  |   X  |   C  |   V  |   B  |--------.  .--------|   N  |   M  |   ,  |   .  |   /  |  '   |
     * '-----------------------------------------/       /    \       \-----------------------------------------'
     *                         | Esc  | Tab  |  / Space /      \ Enter \  | Bsps | Del  |
     *                         |_FUNC | _NUM | /_SYMBOL/        \ _FUNC \ | _NAV | RAlt |
     *                         `-------------''-------'          '-------''-------------'
     */
    // clang-format off
    [_QWERTY] = LAYOUT(EH_LEFT,    EH_RGHT,    KC_3,    KC_4,    KC_5,    KC_6,
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,
    KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,
       EH_LEFT,    EH_RGHT,    KC_9,    KC_0,    KC_MINS, KC_EQL,
        
                      KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_BSPC,
                        KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
                        KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RSFT,
                    KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC
    ),

    [_GAME] = LAYOUT(
                         KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,
    KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,
        KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
        
                      KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_BSPC,
                        KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
                        KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RSFT,
                    KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC
    ),

    [_NAV] = LAYOUT(
                          KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,
    KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,
        KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
        
                      KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_BSPC,
                        KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
                        KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RSFT,
                    KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC
    ),

    [_NUMBER] = LAYOUT(KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,
    KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,
        KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
        
                      KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_BSPC,
                        KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
                        KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RSFT,
                    KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC
    )
};
