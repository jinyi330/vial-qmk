#include QMK_KEYBOARD_H

#define HOME 0
#define MODS 1
#define MODS2 2
#define OTHER 3

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] =   { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),           ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
    [2] =   { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),           ENCODER_CCW_CW(RGB_SPD, RGB_SPI)  },
    [3] =   { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD),          ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
    //                  Encoder 1                                     Encoder 2
};
#endif

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
	[0] = LAYOUT(LCTL(KC_C), LCTL(KC_S), LCTL(KC_Z), LCTL(KC_V)),

	[1] = LAYOUT(LCTL(KC_C), LCTL(KC_S), LCTL(KC_Z), LCTL(KC_V)),

	[2] = LAYOUT(LCTL(KC_C), LCTL(KC_S), LCTL(KC_Z), LCTL(KC_V)),

	[3] = LAYOUT(LCTL(KC_C), LCTL(KC_S), LCTL(KC_Z), LCTL(KC_V)),

	[4] = LAYOUT(LCTL(KC_C), LCTL(KC_S), LCTL(KC_Z), LCTL(KC_V)),

	[5] = LAYOUT(LCTL(KC_C), LCTL(KC_S), LCTL(KC_Z), LCTL(KC_V)),

	[6] = LAYOUT(LCTL(KC_C), LCTL(KC_S), LCTL(KC_Z), LCTL(KC_V)),

	[7] = LAYOUT(LCTL(KC_C), LCTL(KC_S), LCTL(KC_Z), LCTL(KC_V)),
};
