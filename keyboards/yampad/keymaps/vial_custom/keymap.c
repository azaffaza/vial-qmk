/* MIT License

Copyright (c) 2019 Mattia Dal Ben

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layers {
    _BAS,
    _NAV,
	_FN,
    _RGB
};

enum custom_keycodes {
    KC_DBL0 = QK_KB,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BAS] = LAYOUT(
    TD(0),    KC_PSLS,  KC_PAST,   LT(_RGB, KC_PMNS),
    KC_P7,    KC_P8,    KC_P9,
    KC_P4,    KC_P5,    KC_P6,     LT(_FN, KC_PPLS),
    KC_P1,    KC_P2,    KC_P3,
    KC_P0,    KC_DBL0,  KC_PDOT,   KC_PENT
  ),

  [_NAV] = LAYOUT(
    KC_INS,   KC_HOME,  KC_PGUP,   TO(_BAS),
    KC_DEL,   KC_END,   KC_PGDN,
    KC_NO,    KC_NO,    KC_NO,     MO(_FN),
    KC_NO,    KC_UP,    KC_NO,
    KC_LEFT,  KC_DOWN,  KC_RGHT,   KC_NO
  ),
  
   [_FN] = LAYOUT(
    KC_F10,   KC_F11,   KC_F12,    KC_NO,
    KC_F7,    KC_F8,    KC_F9,
    KC_F4,    KC_F5,    KC_F6,     KC_TRNS,
    KC_F1,    KC_F2,    KC_F3,
    KC_NO,    KC_PSCR,  KC_NO,     KC_NO
  ),
  
  [_RGB] = LAYOUT(
    KC_NO,    RGB_MOD,  RGB_TOG,   KC_NO,
    RGB_HUD,  RGB_HUI,  KC_NO,
    RGB_SAD,  RGB_SAI,  KC_NO,     EE_CLR,
    RGB_VAD,  RGB_VAI,  KC_NO,
    KC_NO,    KC_NO,    QK_RBT,    QK_BOOT
  ),
  
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_DBL0:
      if (record->event.pressed) {
        SEND_STRING("00");
      } else {
        // when keycode KC_DBL0 is released
      }
      break;

  }
  return true;
};

void keyboard_post_init_user(void) {
    vial_tap_dance_entry_t td = {
		KC_NUM,
        KC_NO,
        TG(1),
        KC_NO,
        TAPPING_TERM
	};
    dynamic_keymap_set_tap_dance(0, &td); // the first value corresponds to the TD(i) slot
};

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;  // flips the display 270 degrees
}

bool oled_task_user(void) {
  // Host Keyboard Layer Status
  oled_write_P(PSTR("Layer"), false);
  switch (get_highest_layer(layer_state)) {
    case _BAS:
      oled_write_ln_P(PSTR(" BAS"), false);
      break;
    case _NAV:
      oled_write_ln_P(PSTR(" NAV"), false);
      break;
    case _FN:
      oled_write_ln_P(PSTR(" FN"), false);
      break;
    case _RGB:
      oled_write_ln_P(PSTR(" RGB"), false);
      break;
    default:
      // Or use the write_ln shortcut over adding '\n' to the end of your string
      oled_write_ln_P(PSTR(" UND"), false);
  }

  // Host Keyboard LED Status
  led_t led_state = host_keyboard_led_state();
  oled_write_P(PSTR("-----"), false);
  oled_write_P(PSTR("Stats"), false);
  oled_write_P(led_state.num_lock ? PSTR("num:*") : PSTR("num:."), false);
  oled_write_P(led_state.caps_lock ? PSTR("cap:*") : PSTR("cap:."), false);

  // Host Keyboard RGB backlight status
  oled_write_P(PSTR("-----"), false);
  oled_write_P(PSTR("Light"), false);

  static char led_buf[30];
  snprintf(led_buf, sizeof(led_buf) - 1, "RGB:%c\nh: %2ds: %2dv: %2d\n",
      rgblight_is_enabled() ? '*' : '.',
      (uint8_t)(rgblight_get_hue() / RGBLIGHT_HUE_STEP),
      (uint8_t)(rgblight_get_sat() / RGBLIGHT_SAT_STEP),
      (uint8_t)(rgblight_get_val() / RGBLIGHT_VAL_STEP));
  oled_write(led_buf, false);

    return false;
};
#endif
