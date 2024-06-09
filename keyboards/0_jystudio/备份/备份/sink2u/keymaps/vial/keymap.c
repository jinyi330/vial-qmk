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
	[0] = LAYOUT(KC_GRV, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, 
		KC_TAB, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, 
		KC_CAPS, KC_X, KC_C, KC_V, KC_B, KC_B, KC_N, KC_M, KC_SLSH, KC_LSFT, 
		KC_LCTL, KC_LCTL, KC_LGUI, KC_SPC, KC_SPC, KC_RGUI, KC_RCTL, KC_RCTL),

	[1] = LAYOUT(KC_GRV, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, 
		KC_TAB, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, 
		KC_CAPS, KC_X, KC_C, KC_V, KC_B, KC_B, KC_N, KC_M, KC_SLSH, KC_LSFT, 
		KC_LCTL, KC_LCTL, KC_LGUI, KC_SPC, KC_SPC, KC_RGUI, KC_RCTL, KC_RCTL),

	[2] = LAYOUT(KC_GRV, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, 
		KC_TAB, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, 
		KC_CAPS, KC_X, KC_C, KC_V, KC_B, KC_B, KC_N, KC_M, KC_SLSH, KC_LSFT, 
		KC_LCTL, KC_LCTL, KC_LGUI, KC_SPC, KC_SPC, KC_RGUI, KC_RCTL, KC_RCTL),

	[3] = LAYOUT(KC_GRV, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, 
		KC_TAB, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, 
		KC_CAPS, KC_X, KC_C, KC_V, KC_B, KC_B, KC_N, KC_M, KC_SLSH, KC_LSFT, 
		KC_LCTL, KC_LCTL, KC_LGUI, KC_SPC, KC_SPC, KC_RGUI, KC_RCTL, KC_RCTL),

	[4] = LAYOUT(KC_GRV, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, 
		KC_TAB, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, 
		KC_CAPS, KC_X, KC_C, KC_V, KC_B, KC_B, KC_N, KC_M, KC_SLSH, KC_LSFT, 
		KC_LCTL, KC_LCTL, KC_LGUI, KC_SPC, KC_SPC, KC_RGUI, KC_RCTL, KC_RCTL),

	[5] = LAYOUT(KC_GRV, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, 
		KC_TAB, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, 
		KC_CAPS, KC_X, KC_C, KC_V, KC_B, KC_B, KC_N, KC_M, KC_SLSH, KC_LSFT, 
		KC_LCTL, KC_LCTL, KC_LGUI, KC_SPC, KC_SPC, KC_RGUI, KC_RCTL, KC_RCTL),

	[6] = LAYOUT(KC_GRV, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, 
		KC_TAB, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, 
		KC_CAPS, KC_X, KC_C, KC_V, KC_B, KC_B, KC_N, KC_M, KC_SLSH, KC_LSFT, 
		KC_LCTL, KC_LCTL, KC_LGUI, KC_SPC, KC_SPC, KC_RGUI, KC_RCTL, KC_RCTL),

	[7] = LAYOUT(KC_GRV, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, 
		KC_TAB, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, 
		KC_CAPS, KC_X, KC_C, KC_V, KC_B, KC_B, KC_N, KC_M, KC_SLSH, KC_LSFT, 
		KC_LCTL, KC_LCTL, KC_LGUI, KC_SPC, KC_SPC, KC_RGUI, KC_RCTL, KC_RCTL),
};
