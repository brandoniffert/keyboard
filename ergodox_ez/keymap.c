#include QMK_KEYBOARD_H
#include "version.h"

#define BASE 0 // Default (Colemak)
#define MACR 1 // Macros
#define NUMS 2 // Numbers
#define SYMB 3 // Symbols

enum custom_keycodes {
  EPRM = SAFE_RANGE,
  VRSN,
  RGB_SLD,

  MC_ARROW,
  MC_HASH_ROCKET
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_ergodox(
      // Left hand
      KC_GRAVE,          KC_1,     KC_2,    KC_3,    KC_4,     KC_5,  KC_PGUP,
      KC_TAB,            KC_Q,     KC_W,    KC_F,    KC_P,     KC_G,  KC_LBRC,
      LT(NUMS, KC_BSPC), KC_A,     KC_R,    KC_S,    KC_T,     KC_D,
      MO(SYMB),          KC_Z,     KC_X,    KC_C,    KC_V,     KC_B,  KC_MINS,
      KC_TRNS,           KC_TRNS,  KC_TRNS, KC_LALT, KC_LSPO,

      // Left thumb
      KC_TRNS,           KC_TRNS,
      KC_TRNS,
      MT(MOD_LGUI, KC_ENTER),  CTL_T(KC_ESC), LSFT(KC_LGUI),

      // Right hand
      KC_PGDN,   KC_6,       KC_7,             KC_8,          KC_9,     KC_0,           KC_BSLASH,
      KC_RBRC,   KC_J,       KC_L,             KC_U,          KC_Y,     KC_SCOLON,      KC_QUOTE,
      KC_H,      KC_N,       KC_E,             KC_I,          KC_O,     MO(MACR),
      KC_EQUAL,  KC_K,       KC_M,             KC_COMMA,      KC_DOT,   KC_SLASH,       KC_MEH,
      KC_RSPC,   KC_LEFT,    KC_DOWN,          KC_UP,         KC_RGHT,

      // Right thumb
      KC_MEDIA_PLAY_PAUSE, KC_ESCAPE,
      KC_LGUI,
      LALT(KC_LGUI), KC_BSPACE,  KC_SPACE
  ),

  [MACR] = LAYOUT_ergodox(
      // Left hand
      KC_TRNS, KC_TRNS,        KC_TRNS,            KC_TRNS,      KC_TRNS,    KC_TRNS,        KC_TRNS,
      KC_TRNS, KC_TRNS,        KC_TRNS,            KC_UP,        KC_TRNS,    KC_TRNS,        KC_TRNS,
      RESET,   KC_TRNS,        KC_LEFT,            KC_DOWN,      KC_RIGHT,   KC_TRNS,
      KC_TRNS, KC_TRNS,        KC_TRNS,            KC_TRNS,      KC_TRNS,    KC_TRNS,        MC_ARROW,
      KC_TRNS, KC_TRNS,        KC_TRNS,            KC_TRNS,      KC_TRNS,

      // Left thumb
      RGB_MOD, KC_TRNS,
      RGB_VAI,
      KC_TRNS, KC_TRNS,        RGB_VAD,

      // Right hand
      KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,      KC_TRNS,    KC_TRNS,        KC_TRNS,
      KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,      KC_TRNS,    KC_TRNS,        KC_TRNS,
      KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,      KC_TRNS,    KC_TRNS,
      MC_HASH_ROCKET, KC_TRNS,        KC_TRNS,            KC_TRNS,      KC_TRNS,    KC_TRNS,        KC_TRNS,
      KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,      KC_TRNS,

      // Right thumb
      RGB_TOG, RGB_SLD,
      RGB_HUI,
      RGB_HUD, KC_TRNS,        KC_TRNS
  ),

  [NUMS] = LAYOUT_ergodox(
      // Left hand
      KC_TRNS,        KC_F1,       KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_TRNS,
      KC_TRNS,        KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
      KC_TRNS,        KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS,        KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
      KC_TRNS,        KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,

      // Left thumb
      KC_TRNS,        KC_TRNS,
      KC_TRNS,
      KC_TRNS,        KC_TRNS,     KC_TRNS,

      // Right hand
      KC_TRNS,        KC_F6,       KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,
      KC_KP_PLUS,     KC_KP_MINUS, KC_7,    KC_8,    KC_KP_9, KC_TRNS,  KC_F12,
      KC_KP_ASTERISK, KC_4,        KC_5,    KC_6,    KC_DOT,  KC_EQUAL,
      KC_TRNS,        KC_KP_SLASH, KC_1,    KC_2,    KC_3,    KC_TRNS,  KC_TRNS,
      KC_KP_0,        KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,

      // Right thumb
      KC_TRNS,        KC_TRNS,
      KC_TRNS,
      KC_TRNS,        KC_TRNS,     KC_TRNS
  ),

  [SYMB] = LAYOUT_ergodox(
      // Left hand
      KC_TRNS, KC_TRNS,   KC_TRNS,      KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS,   KC_TRNS,      KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS,   KC_TRNS,      KC_TRNS,       KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS,   KC_TRNS,      KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS,   KC_TRNS,      KC_TRNS,       KC_TRNS,

      // Left thumb
      KC_TRNS, KC_TRNS,
      KC_TRNS,
      KC_TRNS, KC_TRNS,   KC_TRNS,

      // Right hand
      KC_TRNS, KC_TRNS,   KC_TRNS,      KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS,   KC_AMPERSAND, KC_ASTERISK,   KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_DOLLAR, KC_PERCENT,   KC_CIRCUMFLEX, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS,   KC_EXCLAIM,   KC_AT,         KC_HASH, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS,   KC_TRNS,      KC_TRNS,       KC_TRNS,

      // Right thumb
      KC_TRNS, KC_TRNS,
      KC_TRNS,
      KC_TRNS, KC_TRNS,   KC_TRNS
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch (keycode) {
      case EPRM:
        eeconfig_init();
        return false;
      case VRSN:
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        return false;
      #ifdef RGBLIGHT_ENABLE
      case RGB_SLD:
        rgblight_mode(1);
        return false;
      #endif
      case MC_ARROW:
        if (record->event.pressed) {
          SEND_STRING("->");
        }
        return false;
      case MC_HASH_ROCKET:
        if (record->event.pressed) {
          SEND_STRING("=>");
        }
        return false;
    }
  }

  return true;
}

// Runs just one time when the keyboard initializes
void matrix_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
  rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

// Runs whenever there is a layer state change
layer_state_t layer_state_set_user(layer_state_t state) {
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();

  uint8_t layer = get_highest_layer(state);
  switch (layer) {
    case 0:
      #ifdef RGBLIGHT_COLOR_LAYER_0
        rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
      #else
      #ifdef RGBLIGHT_ENABLE
        rgblight_init();
      #endif
      #endif
      break;
    case 1:
      ergodox_right_led_1_on();
      #ifdef RGBLIGHT_COLOR_LAYER_1
        rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
      #endif
      break;
    case 2:
      ergodox_right_led_2_on();
      #ifdef RGBLIGHT_COLOR_LAYER_2
        rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
      #endif
      break;
    case 3:
      ergodox_right_led_3_on();
      #ifdef RGBLIGHT_COLOR_LAYER_3
        rgblight_setrgb(RGBLIGHT_COLOR_LAYER_3);
      #endif
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      #ifdef RGBLIGHT_COLOR_LAYER_4
        rgblight_setrgb(RGBLIGHT_COLOR_LAYER_4);
      #endif
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      #ifdef RGBLIGHT_COLOR_LAYER_5
        rgblight_setrgb(RGBLIGHT_COLOR_LAYER_5);
      #endif
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      #ifdef RGBLIGHT_COLOR_LAYER_6
        rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
      #endif
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      #ifdef RGBLIGHT_COLOR_LAYER_7
        rgblight_setrgb(RGBLIGHT_COLOR_LAYER_7);
      #endif
      break;
    default:
      break;
  }

  return state;
};
