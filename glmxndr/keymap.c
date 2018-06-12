#include "ergodox_ez.h"
#include "quantum.h"
#include "debug.h"
#include "action_layer.h"
#include "version.h"


#include "keymap_german.h"
#include "keymap_nordic.h"

#define _____ KC_TRANSPARENT

#define SFT_U  SFT_T(KC_U)
#define CTL_O  CTL_T(KC_O)
#define CMD_I  GUI_T(KC_I)
#define ALT_E  ALT_T(KC_E)

#define LT1_SPC  LT(1,KC_SPC)
#define LT1_ENT  LT(1,KC_ENTER)
#define LT4_RCTL LT(4,KC_RCTRL)
#define CS_LFT LCTL(LSFT(KC_LEFT))
#define C_LFT  LCTL(KC_LEFT)

#define C_RGT LCTL(KC_RIGHT)
#define CS_RGT LCTL(LSFT(KC_RIGHT))

#define SFT_SCOLN SFT_T(KC_SCOLON)
#define CTL_W  CTL_T(KC_W)
#define _CMD_T  GUI_T(KC_T)
#define ALT_S  ALT_T(KC_S)

#define SFT_BSLS SFT_T(KC_BSLASH)
#define CTL_SLSH CTL_T(KC_SLASH)
#define CMD_LBRC GUI_T(KC_LBRACKET)
#define ALT_RBRC ALT_T(KC_RBRACKET)

#define ALT_COMM ALT_T(KC_COMMA)
#define CMD_DOT GUI_T(KC_DOT)
#define CTL_QUOT CTL_T(KC_QUOTE)
#define SFT_GRV SFT_T(KC_GRAVE)

#define SFT_1  SFT_T(KC_1)
#define CTL_2  CTL_T(KC_2)
#define CMD_3  GUI_T(KC_3)
#define ALT_4  ALT_T(KC_4)
#define ALT_7  ALT_T(KC_7)
#define CMD_8  GUI_T(KC_8)
#define CTL_9  CTL_T(KC_9)
#define SFT_0  SFT_T(KC_0)

#define S_Z SFT_T(KC_Z)
#define C_X CTL_T(KC_X)
#define W_C GUI_T(KC_C)
#define A_V ALT_T(KC_V)

#define S_L SFT_T(KC_L)
#define C_K CTL_T(KC_K)
#define W_J GUI_T(KC_J)
#define A_H ALT_T(KC_H)

#define S_GRV  SFT_T(KC_GRAVE)
#define C_QUOT CTL_T(KC_QUOTE)
#define W_DOT  GUI_T(KC_DOT)
#define A_COMM ALT_T(KC_COMMA)

#define S_BSLS SFT_T(KC_BSLASH)
#define C_SLSH CTL_T(KC_SLASH)
#define W_LBRC GUI_T(KC_LBRACKET)
#define A_RBRC ALT_T(KC_RBRACKET)

#define S_6 SFT_T(KC_6)
#define C_7 CTL_T(KC_7)
#define W_8 GUI_T(KC_8)
#define A_9 ALT_T(KC_9)

#define S_5 SFT_T(KC_5)
#define C_4 CTL_T(KC_4)
#define W_3 GUI_T(KC_3)
#define A_2 ALT_T(KC_2)

#define A_SYSRQ ALT_T(KC_SYSREQ)

#define CTL_Z LCTL(KC_Z)
#define CTL_X LCTL(KC_X)
#define CTL_C LCTL(KC_C)
#define CTL_V LCTL(KC_V)

#define SFT_INS LSFT(KC_INSERT)
#define CTL_INS LCTL(KC_INSERT)

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  VRSN,
  RGB_SLD,

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = KEYMAP(
    KC_MINUS, KC_1,    KC_2,    KC_3,   KC_4,  KC_5,  KC_LEFT,
    KC_DEL,   KC_DOT,  KC_G,    KC_F,   KC_D,  KC_Q,  C_LFT,
    KC_LSFT,  KC_O,    KC_I,    KC_E,   KC_A,  KC_U,
    TT(1),    S_Z,     C_X,     W_C,    A_V,   KC_B,  CS_LFT,
    KC_INS,   KC_PAUS, KC_CAPS, TT(3),  TT(2),

                 KC_LEFT, KC_RIGHT,
                          KC_LALT,
         KC_SPC, KC_ENT,  KC_LCTL,

                KC_RGHT, KC_6,    KC_7,  KC_8,   KC_9,   KC_0,    KC_GRV,
                C_RGT,   KC_QUOT, KC_W,  KC_M,   KC_P,   KC_COMM, KC_BSPC,
                         KC_Y,    KC_R,  KC_S,   KC_T,   KC_N,    KC_ENT,
                CS_RGT,  KC_SCLN, A_H,   W_J,    C_K,    S_L,     TT(1),
                                  TT(4), OSL(5), KC_EQL, KC_PSCR, KC_RCTL,

                        KC_UP,   KC_LGUI,
                        KC_DOWN,
                        KC_APP,  KC_ESC, KC_TAB
  ),

  [1] = KEYMAP(
    _____,   _____,   _____,   _____,    _____,   _____,    _____,
    _____,   KC_AMPR, KC_EXLM, KC_LCBR,  KC_RCBR, KC_DLR,   _____,
    _____,   KC_PIPE, KC_QUES, KC_LPRN,  KC_RPRN, KC_UNDS,
    _____,   S_BSLS,  C_SLSH,  W_LBRC,   A_RBRC,  KC_TILD,  _____,
    _____,   _____,   _____,   _____,    TO(0),

             _____,_____,_____,_____,_____,_____,

                _____,   _____,    _____,  _____,   _____,    _____,   _____,
                KC_PERC, KC_AT,    KC_EQL, KC_PLUS, KC_ASTR, KC_CIRC, _____,
                         KC_MINUS, KC_LT,  KC_GT,   KC_DQT,   KC_HASH, _____,
                _____,   KC_COLON, A_COMM, W_DOT,   C_QUOT,   S_GRV,   _____,
                                   _____,  _____,   _____,    _____,   _____,

                    _____,_____,_____,_____,_____,_____
  ),

  [2] = KEYMAP(
    _____,   _____,   _____,   _____,    _____,    _____,    RESET,
    _____,   _____,   KC_UP,   KC_MS_UP, KC_WH_U,  _____,    _____,
    _____,   KC_WH_L, KC_MS_L, KC_MS_D,  KC_MS_R,  KC_WH_R,
    _____,   KC_LEFT, KC_DOWN, KC_DOWN,  KC_WH_D,  KC_RIGHT, _____,
    _____,   _____,   _____,   _____,    TO(0),

                       _____,   _____,
                                KC_BTN3,
                _____, KC_BTN1, KC_BTN2,

          RGB_HUD, RGB_HUI,  RGB_VAD, RGB_VAI, RGB_MOD, RGB_SLD, RGB_TOG,
          _____,   KC_VOLU,  KC_BTN4, KC_BTN5, _____,   _____,   _____,
                   KC_VOLD,  KC_BTN1, KC_BTN2, KC_BTN3, KC_ACL1, KC_ACL0,
          _____,   KC_MUTE,  KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,_____,
                             _____,   _____,   _____,   _____,   _____,

                _____,_____,_____,_____,_____,_____
  ),

  [3] = KEYMAP(
    _____, _____, _____, _____, _____, _____, _____,
    _____, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, _____,
    KC_0,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,
    _____, S_6,   C_7,   W_8,   A_9,  KC_0,  _____,
    _____, _____, _____, _____, TO(0),

          _____,_____,_____,_____,_____,_____,

          _____, _____, _____, _____, _____, _____,  _____,
          _____, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
                 KC_6,  KC_7,  KC_8,  KC_9,  KC_0,   KC_F12,
          _____, KC_1,  A_2,   W_3,   C_4,   S_5,   _____,
                        _____, _____, _____, _____,  _____,

                      _____,_____,_____,_____,_____,_____
  ),

  [4] = KEYMAP(
    KC_R,  KC_E,    KC_I,    KC_S,    KC_U,    KC_B,  _____,
    _____, _____,   _____,   _____,   _____,   _____, _____,
    _____, _____,   _____,   _____,   _____,   _____,
    _____, KC_LSFT, KC_LCTL, KC_LGUI, KC_LALT, _____, _____,
    _____, _____,   _____,   _____,   TO(0),

          _____,_____,_____,_____,_____,_____,

          A_SYSRQ, _____,   _____,      _____,   _____,    _____,  _____,
          _____,   _____,   KC_PGUP,    KC_UP,   _____,    _____,  _____,
                   KC_HOME, KC_LEFT,    KC_DOWN, KC_RIGHT, KC_END, _____,
          _____,   _____,   KC_PGDOWN,  _____,   _____,    _____,  _____,
                            _____,      _____,   _____,    _____,  _____,

                _____,_____,_____,_____,_____,_____
  ),

  [5] = KEYMAP(
    _____, _____, _____, _____,   _____,   _____, _____,
    _____, _____, _____, CTL_INS, SFT_INS, _____, _____,
    _____, CTL_Z, CTL_X, CTL_C,   CTL_V,   _____,
    _____, _____, _____, _____,   _____,   _____, _____,
    _____, _____, _____, _____,   TO(0),

          _____,_____,_____,_____,_____,_____,

          _____,_____,_____,_____,_____,_____,_____,
          _____,_____,_____,_____,_____,_____,_____,
                _____,_____,_____,_____,_____,_____,
          _____,_____,_____,_____,_____,_____,_____,
                      _____,_____,_____,_____,_____,

          _____,_____,_____,_____,_____,_____
  ),

};

const uint16_t PROGMEM fn_actions[] = {
  [1] = ACTION_LAYER_TAP_TOGGLE(1)
};

// leaving this in place for compatibilty with old keymaps cloned and re-compiled.
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
      switch(id) {
        case 0:
        if (record->event.pressed) {
          SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        }
        break;
      }
    return MACRO_NONE;
};

void matrix_init_user(void) { // Runs boot tasks for keyboard
#ifdef RGBLIGHT_ENABLE
    //set the layer color at initalization, because it won't set otherwise
    rgblight_enable();
    rgblight_mode(1);
    #ifdef RGBLIGHT_COLOR_LAYER_0
    rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
    #endif
#endif
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
      break;

  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 0:
        #ifdef RGBLIGHT_COLOR_LAYER_0
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
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
