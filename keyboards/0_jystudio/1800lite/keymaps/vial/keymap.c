#include QMK_KEYBOARD_H

#define HOME 0
#define MODS 1
#define MODS2 2
#define OTHER 3

enum custom_keycodes {
	MACRO1 = SAFE_RANGE
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	if (record->event.pressed) {
		switch (keycode) {
			case MACRO1:
				SEND_STRING("I'm so sorry... -PyroL");
				return false;
		}
	}
	return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[HOME] = LAYOUT(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_P7, KC_P8, KC_P9, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_BSLS, KC_P4, KC_P5, KC_P6, KC_CAPS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_LSFT, KC_UP, KC_P1, KC_P2, KC_P3, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(1), MO(2), KC_LEFT, KC_DOWN, KC_RGHT, KC_P0, KC_PDOT),

	[HOME] = LAYOUT(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_P7, KC_P8, KC_P9, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_BSLS, KC_P4, KC_P5, KC_P6, KC_CAPS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_LSFT, KC_UP, KC_P1, KC_P2, KC_P3, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(1), MO(2), KC_LEFT, KC_DOWN, KC_RGHT, KC_P0, KC_PDOT),

	[HOME] = LAYOUT(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_P7, KC_P8, KC_P9, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_BSLS, KC_P4, KC_P5, KC_P6, KC_CAPS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_LSFT, KC_UP, KC_P1, KC_P2, KC_P3, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(1), MO(2), KC_LEFT, KC_DOWN, KC_RGHT, KC_P0, KC_PDOT),

	[HOME] = LAYOUT(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_P7, KC_P8, KC_P9, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_BSLS, KC_P4, KC_P5, KC_P6, KC_CAPS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_LSFT, KC_UP, KC_P1, KC_P2, KC_P3, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(1), MO(2), KC_LEFT, KC_DOWN, KC_RGHT, KC_P0, KC_PDOT),
};
