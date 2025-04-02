#include "kei46.h"
#define _BASE 0
#define _FN1 1
#define _FN2 2
#define _APPS 3


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 /* Base Layer
   * ,----------------------------------------------------------------------------.
   * | Esc   |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  | Bspace |
   * |----------------------------------------------------------------------------+
   * |  Tab  |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |    '   |
   * |----------------------------------------------------------------------------+
   * | Shift |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |   Caps |
   * |----------------------------------------------------------------------------+
   * | Ctrl  | Gui | Alt |  L1 |    Space  |   Enter   | L2  | Alt | Gui |   Ctrl |   |||RGB|||
   * `----------------------------------------------------------------------------'
 */
	[_BASE] = LAYOUT (                            
		KC_ESC,  KC_Q,    KC_W,    KC_E,  KC_R, KC_T, KC_Y,   KC_U,  KC_I,    KC_O,    KC_P, KC_BSPC,
		KC_TAB,  KC_A,    KC_S,    KC_D,  KC_F, KC_G, KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,
		KC_LSFT, KC_Z,    KC_X,    KC_C,  KC_V, KC_B, KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_CAPS,
		KC_LCTL, KC_LGUI, KC_LALT, MO(1),    KC_SPC,      KC_ENT,    MO(2),   KC_RALT, KC_RGUI, KC_RCTL, RGB_TOG),
 

 /* Layer1
   * ,-----------------------------------------------------------------------------.
   * |  ~   |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9   |  0   | Delete |
   * |-----------------------------------------------------------------------------+
   * |  `   |  !  |  @  |  #  |  $  |  %  |  ^  |  &  |  *  |  (   |  )   |    |   |
   * |-----------------------------------------------------------------------------+
   * |      |     |     |     |     |     |     |     |     |      |  UP  |        |
   * |-----------------------------------------------------------------------------+
   * |      |     |     |     |           |           | L3  | Left | Down | Right  |   |||Enter|||
   * `-----------------------------------------------------------------------------'
 */
	[_FN1] = LAYOUT (
		KC_GRV,   KC_1,        KC_2,    KC_3,    KC_4,      KC_5,       KC_6,          KC_7,         KC_8,        KC_9,          KC_0,           KC_DELETE,
		KC_TILDE, KC_EXCLAIM,  KC_AT,   KC_HASH, KC_DOLLAR, KC_PERCENT, KC_CIRCUMFLEX, KC_AMPERSAND, KC_ASTERISK, KC_LEFT_PAREN, KC_RIGHT_PAREN, KC_PIPE,
		KC_TRNS,  KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,    KC_TRNS,       KC_TRNS,      KC_TRNS,     KC_TRNS,       KC_UP,          KC_TRNS, 
		KC_TRNS,  KC_TRNS,     KC_TRNS, KC_TRNS,        KC_TRNS,               KC_TRNS,              MO(3),       KC_LEFT,       KC_DOWN,        KC_RGHT,       KC_ENT),


 /* Layer2
   * ,------------------------------------------------------------------.
   * |     | F1 | F2 | F3 | F4 | F5 | F6  | F7 |  F8 |  F9  | F10 |     |
   * |------------------------------------------------------------------+
   * |     |    |    |    |    |    |     |  - |  =  |  [   |  ]  |  \  |
   * |------------------------------------------------------------------+
   * |     |    |    |    |    |    |     | _  |  +  |  {   |  }  |  |  |
   * |------------------------------------------------------------------+
   * |     |    |    | L3 |         |          |     |      |     |     |  |||     |||
   * `------------------------------------------------------------------'
 */
	[_FN2] = LAYOUT (
		KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,         KC_F8,   KC_F9,               KC_F10,               KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS,       KC_EQL,  KC_LBRC,             KC_RBRC,              KC_BSLS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UNDERSCORE, KC_PLUS, KC_LEFT_CURLY_BRACE, KC_RIGHT_CURLY_BRACE, KC_PIPE, 
		KC_TRNS, KC_TRNS, KC_TRNS, MO(3),        KC_TRNS,          KC_TRNS,           KC_TRNS, KC_TRNS,             KC_TRNS,              KC_TRNS,       KC_TRNS),

		
 /* Layer3
   * ,--------------------------------------------------------------------------------.
   * | Esc | Calc | Webhm  |  Mail  |  Comp  |       |    |    |    |    |    | PrtSc |
   * |--------------------------------------------------------------------------------+
   * |     |  RGB | RGBmo  | RGBSta | RGBHui | RGBB+ |    |    |    |    |    | Boot  |
   * |--------------------------------------------------------------------------------+ 
   * |     |      | RGBSai | RGBSad | RGBHud | RGBB- |    |    |    |    |    |       |
   * |--------------------------------------------------------------------------------+
   * |     |      |        |        |                |         |    |    |    |       |  |||     |||
   * `--------------------------------------------------------------------------------'
 */		
	[_APPS] = LAYOUT (
		KC_ESC,  KC_CALC, KC_WHOM, KC_MAIL, KC_MYCM, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_TRNS,
		KC_TRNS, RGB_TOG, RGB_MOD, RGB_M_P, RGB_HUI, RGB_VAI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,
		KC_TRNS, KC_TRNS, RGB_SAI, RGB_SAD, RGB_HUD, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,          KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R,      KC_TRNS),
};



void matrix_init_user(void) {
}	

bool is_alt_tab_active = false;
uint16_t alt_tab_timer = 0;
void matrix_scan_user(void) {
  if (is_alt_tab_active) {
    if (timer_elapsed(alt_tab_timer) > 1250) {
      unregister_code(KC_LALT);
      is_alt_tab_active = false;
    }
  }
}

/*
layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _FN1:
            rgblight_setrgb(RGB_BLUE);
            break;
        case _FN2:
            rgblight_setrgb(RGB_RED);
            break;
		case _APPS:
            rgblight_setrgb(RGB_CYAN);
            break;
        default: // for any other layers, or the default layer
            rgblight_setrgb (RGB_WHITE);
            break;
    }
  return state;
}
*/

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

#ifdef OLED_ENABLE

bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR(" "), false);

    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("SPACE IS THE PLACE\n"), false);
            break;
        case _FN1:
            oled_write_P(PSTR("FN1\n"), false);
            break;
        case _FN2:
            oled_write_P(PSTR("FN2\n"), false);
            break;
        case _APPS:
            oled_write_P(PSTR("APPs\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    
    return false;
}

#endif

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    switch (index) {
        case 0:
		    if (IS_LAYER_ON(_BASE)) {
            if (clockwise) {
                tap_code(KC_VOLD); // VOLUME DOWN IN LAYER 0
            } else {
                tap_code(KC_VOLU); // VOLUME UP IN LAYER 0
            }
			}
	}		
    switch (index) {
		case 0:
			if (IS_LAYER_ON(_FN1)) {
            if (clockwise) {
			if (!is_alt_tab_active) {
            is_alt_tab_active = true;
            register_code(KC_LALT);
            }
			alt_tab_timer = timer_read();
            tap_code16(S(KC_TAB));   // ALT+TAB LEFT 
            } else {
			if (!is_alt_tab_active) {
		    is_alt_tab_active = true;
			register_code(KC_LALT);
			}
			alt_tab_timer = timer_read();
			tap_code16(KC_TAB);     // ALT+TAB RIGHT
			}
			}	
    }
    switch (index) {
		case 0:
			if (IS_LAYER_ON(_FN2)) {
            if (clockwise) {
                tap_code(KC_WH_U);  // MOUSE WHELL UP IN LAYER 2
            } else {
                tap_code(KC_WH_D); // MOUSE WHELL DOWN IN LAYER 2
            }
			}	
    }
         /*
	    / switch (index) {
		case 0:
			if (IS_LAYER_ON(_APPS)) {
            if (clockwise) {
                tap_code(RGB_VAI); // BRIGHTNESS UP IN LAYER 3
            } else {
                tap_code(RGB_VAD); // BRIGHTNESS DOWN IN LAYER 3
            }
			}	
    }   
         */
    return true;
}

#endif