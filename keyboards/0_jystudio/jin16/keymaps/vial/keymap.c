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
	[HOME] = LAYOUT(
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H),

	[MODS] = LAYOUT(
		KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
		KC_BSPC, KC_ESC, KC_TAB, KC_SCLN, KC_QUOT, KC_LEFT),

	[MODS2] = LAYOUT(
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H),

	[OTHER] = LAYOUT(
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H),
};
