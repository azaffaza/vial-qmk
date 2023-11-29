/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
	STN_SL, STN_TL, STN_PL, STN_HL, STN_STR, STN_FR, STN_PR, STN_LR, STN_TR, STN_DR,
	    	STN_KL, STN_WL, STN_RL,          STN_RR, STN_BR, STN_GR, STN_SR, STN_ZR,
	            	STN_A,  STN_O,           STN_E,  STN_U
	),

};
