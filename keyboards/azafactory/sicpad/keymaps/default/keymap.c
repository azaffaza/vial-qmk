/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
           ┌───┐
           │ G │  
       ┌───┼───┼───┐
       │ A │ B │ C │
       ├───┼───┼───┤
       │ D │ E │ F │
       └───┴───┴───┘
*/	 
	[0] = LAYOUT(
		KC_MUTE,
		KC_INS,  KC_HOME, KC_PGUP,
		KC_DEL,  KC_END,  KC_PGDN
	),

	[1] = LAYOUT(
		KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS
	),

	[2] = LAYOUT(
		KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS
	),

};

/* `ENCODER_MAP_ENABLE = yes` must be added to the rules.mk at the KEYMAP level. See QMK docs. */
/* Remove the following code if you do not enable it in your keymap (e.g. default keymap). */
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
	[0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
	[1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
	[2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }
};
#endif
