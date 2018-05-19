#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"
#include "version.h"


#include "keymap_german.h"

#include "keymap_nordic.h"

#define _____ KC_TRANSPARENT

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  VRSN,
  RGB_SLD,

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = KEYMAP(

    KC_DELETE,  /**/  KC_1,         /**/  KC_2,         /**/  KC_3,         /**/  KC_4,         /**/  KC_5,        /**/  KC_SLASH,             
    KC_ESCAPE,  /**/  KC_Y,         /**/  KC_H,         /**/  KC_G,         /**/  KC_F,         /**/  KC_D,        /**/  LCTL(KC_LEFT),        
    KC_TAB,     /**/  SFT_T(KC_U),  /**/  CTL_T(KC_O),  /**/  GUI_T(KC_I),  /**/  ALT_T(KC_E),  /**/  KC_A,        /**/                        
    KC_LSHIFT,  /**/  KC_Z,         /**/  KC_X,         /**/  KC_C,         /**/  KC_V,         /**/  LT(4, KC_B), /**/  LCTL(LSFT(KC_LEFT)),  
    KC_EQUAL,   /**/  KC_GRAVE,     /**/  TT(3),        /**/  TT(2),        /**/  TT(1),        /**/


                  /**/  KC_ESCAPE,  /**/  KC_LGUI,
                  /**/              /**/  KC_LALT,
        KC_SPACE, /**/  KC_BSPACE,  /**/  KC_LCTL,


        KC_BSLASH,             /**/  KC_6,            /**/  KC_7,           /**/  KC_8,        /**/  KC_9,        /**/  KC_0,             /**/  KC_MINUS,  
        LCTL(KC_RIGHT),        /**/  KC_L,            /**/  KC_M,           /**/  KC_N,        /**/  KC_P,        /**/  KC_Q,             /**/  KC_BSPACE, 
                               /**/  KC_R,            /**/  ALT_T(KC_S),    /**/  GUI_T(KC_T), /**/  CTL_T(KC_W), /**/  SFT_T(KC_SCOLON), /**/  KC_ENTER,  
        LCTL(LSFT(KC_RIGHT)),  /**/  KC_J,            /**/  KC_K,           /**/  KC_COMMA,    /**/  KC_DOT,      /**/  KC_QUOTE,         /**/  KC_RSHIFT, 
                                                            LT(4, KC_LEFT), /**/  KC_RIGHT,    /**/  _____,       /**/  _____,            /**/  KC_INSERT, 

                      /**/  KC_APPLICATION, /**/ KC_DELETE,
            KC_RALT,  /**/                  /**/
            KC_RCTRL, /**/  KC_TAB,         /**/ KC_ENTER
  ),

  [1] = KEYMAP(

    KC_DELETE,   /**/ KC_F1,    /**/ KC_F2,   /**/ KC_F3,   /**/ KC_F4,    /**/ KC_F5,           /**/ KC_PAUSE,
    KC_ESCAPE,   /**/ KC_GRAVE, /**/ KC_DLR,  /**/ KC_PIPE, /**/ KC_QUES,  /**/ KC_EXLM,         /**/ KC_TILD,
    KC_TAB,      /**/ KC_CIRC,  /**/ KC_UNDS, /**/ KC_DQUO, /**/ KC_QUOTE, /**/ KC_COMMA,        /**/
    KC_LSHIFT,   /**/ KC_HASH,  /**/ KC_AMPR, /**/ KC_ASTR, /**/ KC_PLUS,  /**/ LT(4, KC_MINUS), /**/ ALL_T(KC_NO),
    KC_CAPSLOCK, /**/ KC_PAUSE, /**/ _____,   /**/ TT(2),   /**/ TO(0),    /**/

               _____, _____,
                      _____,
        _____, _____, _____,


        KC_CAPSLOCK,  /**/ KC_F6,     /**/ KC_F7,       /**/ KC_F8,       /**/ KC_F9,    /**/ KC_F10,     /**/ KC_F11,    
        KC_PERC,      /**/ KC_SCOLON, /**/ KC_LCBR,     /**/ KC_RCBR,     /**/ KC_LABK,  /**/ KC_RABK,    /**/ KC_F12,    
                      /**/ KC_DOT,    /**/ KC_LPRN,     /**/ KC_RPRN,     /**/ KC_SLASH, /**/ KC_BSLASH,  /**/ KC_ENTER,  
        MEH_T(KC_NO), /**/ KC_COLN,   /**/ KC_LBRACKET, /**/ KC_RBRACKET, /**/ KC_AT,    /**/ KC_EQUAL,   /**/ KC_RSHIFT, 
                                           _____,       /**/ _____,       /**/ _____,    /**/ KC_PSCREEN, /**/ KC_INSERT, 

            _____, _____,
            _____,
            _____, _____, _____
  ),

  [2] = KEYMAP(

    _____,     /**/ _____,         /**/ _____,      /**/ KC_UP,      /**/ _____,         /**/ _____,          /**/ RESET, 
    _____,     /**/ _____,         /**/ _____,      /**/ KC_MS_UP,   /**/ KC_MS_WH_UP,   /**/ _____,          /**/ _____, 
    _____,     /**/ KC_MS_WH_LEFT, /**/ KC_MS_LEFT, /**/ KC_MS_DOWN, /**/ KC_MS_RIGHT,   /**/ KC_MS_WH_RIGHT, /**/ 
    KC_LSHIFT, /**/ KC_LEFT,       /**/ KC_RIGHT,   /**/ KC_DOWN,    /**/ KC_MS_WH_DOWN, /**/ _____,          /**/ _____, 
    _____,     /**/ _____,         /**/ _____,      /**/ _____,      /**/ TO(0), 

               _____, _____,
                      _____,
        _____, _____, _____,


        RGB_HUD, /**/ RGB_HUI,           /**/ RGB_VAD,    /**/ RGB_VAI,    /**/ RGB_MOD,    /**/ RGB_SLD,      /**/ RGB_TOG, 
        _____,   /**/ KC_AUDIO_VOL_UP,   /**/ KC_MS_BTN4, /**/ KC_MS_BTN5, /**/ _____,      /**/ _____,        /**/ KC_BSPACE, 
                 /**/ KC_AUDIO_VOL_DOWN, /**/ KC_MS_BTN1, /**/ KC_MS_BTN2, /**/ KC_MS_BTN3, /**/ KC_MS_ACCEL0, /**/ KC_ENTER, 
        _____,   /**/ KC_AUDIO_MUTE,     /**/ _____,      /**/ _____,      /**/ _____,      /**/ _____,        /**/ KC_RSHIFT, 
                                              _____,      /**/ _____,      /**/ _____,      /**/ _____,        /**/ _____, 

                      _____,_____,
                      _____,
                      _____,_____,_____
  ),

  [3] = KEYMAP(

    _____, /**/ _____,       /**/ _____,       /**/ _____,       /**/ _____,       /**/ _____, /**/ _____,
    _____, /**/ KC_F1,       /**/ KC_F2,       /**/ KC_F3,       /**/ KC_F4,       /**/ KC_F5, /**/ _____,
    KC_0,  /**/ SFT_T(KC_1), /**/ CTL_T(KC_2), /**/ GUI_T(KC_3), /**/ ALT_T(KC_4), /**/ KC_5,  /**/
    _____, /**/ KC_6,        /**/ KC_7,        /**/ KC_8,        /**/ KC_9,        /**/ KC_0,  /**/ _____,
    _____, /**/ _____,       /**/ _____,       /**/ _____,       /**/ _____,

              _____,_____,
                    _____,
        _____,_____,_____,


        _____, /**/ _____, /**/ _____,       /**/ _____,       /**/ _____,       /**/ _____,       /**/ _____, 
        _____, /**/ KC_F6, /**/ KC_F7,       /**/ KC_F8,       /**/ KC_F9,       /**/ KC_F10,      /**/ KC_F11, 
               /**/ KC_6,  /**/ ALT_T(KC_7), /**/ GUI_T(KC_8), /**/ CTL_T(KC_9), /**/ SFT_T(KC_0), /**/ KC_F12, 
        _____, /**/ KC_1,  /**/ KC_2,        /**/ KC_3,        /**/ KC_4,        /**/ KC_5,        /**/ _____, 
                                _____,       /**/ _____,       /**/ _____,       /**/ _____,       /**/ _____, 

                    _____,_____,
                    _____,
                    _____,_____,_____
  ),

  [4] = KEYMAP(

    _____, /**/ _____,     /**/ _____,   /**/ _____,   /**/ _____,   /**/ _____, /**/ _____, 
    _____, /**/ _____,     /**/ _____,   /**/ _____,   /**/ _____,   /**/ _____, /**/ _____, 
    _____, /**/ KC_LSHIFT, /**/ KC_LCTL, /**/ KC_LGUI, /**/ KC_LALT, /**/ _____, /**/ 
    _____, /**/ _____,     /**/ _____,   /**/ _____,   /**/ _____,   /**/ _____, /**/ _____, 
    _____, /**/ _____,     /**/ _____,   /**/ _____,   /**/ _____,   /**/ 

              _____,_____,
                    _____,
        _____,_____,_____,


        _____, /**/ _____,   /**/ _____,     /**/ _____,   /**/ _____,    /**/ _____,  /**/ _____, 
        _____, /**/ _____,   /**/ KC_PGUP,   /**/ KC_UP,   /**/ _____,    /**/ _____,  /**/ _____, 
               /**/ KC_HOME, /**/ KC_LEFT,   /**/ KC_DOWN, /**/ KC_RIGHT, /**/ KC_END, /**/ _____, 
        _____, /**/ _____,   /**/ KC_PGDOWN, /**/ _____,   /**/ _____,    /**/ _____,  /**/ _____, 
                                  _____,     /**/ _____,   /**/ _____,    /**/ _____,  /**/ _____, 

                    _____,_____,
                    _____,
                    _____,_____,_____
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

void matrix_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
  rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

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
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
        #endif
        break;
      default:
        break;
    }
    return state;

};