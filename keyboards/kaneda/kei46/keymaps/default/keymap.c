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
		KC_ESC,  KC_Q,    KC_W,    KC_E,  KC_R, KC_T, KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC,
		KC_TAB,  KC_A,    KC_S,    KC_D,  KC_F, KC_G, KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,
		KC_LSFT, KC_Z,    KC_X,    KC_C,  KC_V, KC_B, KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_CAPS,
		KC_LCTL, KC_LGUI, KC_LALT, MO(1),     KC_SPC,       KC_ENT,  MO(2),   KC_RALT, KC_RGUI, KC_RCTL, RGB_TOG),
 

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
		KC_GRV,   KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
		KC_TILDE, KC_EXLM,  KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
		KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS, 
		KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,          KC_TRNS,          KC_TRNS, MO(3),   KC_LEFT, KC_DOWN, KC_RGHT,  KC_ENT),


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
		KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, 
		KC_TRNS, KC_TRNS, KC_TRNS, MO(3),        KC_TRNS,          KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS),

		
 /* Layer3
   * ,--------------------------------------------------------------------------------.
   * | Esc | Calc | Webhm  |  Mail  |  Comp  |       |    |    |    |    |    | PrtSc |
   * |--------------------------------------------------------------------------------+
   * |     |  RGB | RGBmo  | RGBSai | RGBHui | RGBB+ |    |    |    |    |    | Boot  |
   * |--------------------------------------------------------------------------------+ 
   * |     |      | RGBSta | RGBSad | RGBHud | RGBB- |    |    |    |    |    |       |
   * |--------------------------------------------------------------------------------+
   * |     |      |        |        |                |         |    |    |    |       |  |||Play/Pause Track|||
   * `--------------------------------------------------------------------------------'
 */		
	[_APPS] = LAYOUT (
		KC_ESC,  KC_CALC, KC_WHOM, KC_MAIL, KC_MYCM, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_TRNS,
		KC_TRNS, RGB_TOG, RGB_MOD, RGB_SAI, RGB_HUI, RGB_VAI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,
		KC_TRNS, KC_TRNS, RGB_M_P, RGB_SAD, RGB_HUD, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,          KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R,      KC_MPLY),
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

/*layer_state_t layer_state_set_user(layer_state_t state) {
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
}*/

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}
#ifdef OLED_ENABLE
oled_rotation_t oled_init_kb(oled_rotation_t rotation) {
    return OLED_ROTATION_180;
}

bool oled_task_kb(void) {
    if (!oled_task_user()) {
        return false;
    }
    if (is_keyboard_master()) {
        // QMK Logo and version information
        // clang-format off
        static const char PROGMEM qmk_logo[] = {
            0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
            0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
            0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0};
        // clang-format on

        oled_write_P(qmk_logo, false);
        oled_write_P(PSTR("KEI46 by THEORIES "), false);
        oled_write_P(PSTR("   Layer: "), false);
        // Host Keyboard Layer Status
        switch (get_highest_layer(layer_state | default_layer_state)) {
            case 0:
                oled_write_P(PSTR("QWERTY\n"), false);
                break;
            case 1:
                oled_write_P(PSTR("Fn1\n"), false);
                break;
            case 2:
                oled_write_P(PSTR("Fn2\n"), false);
                break;
            case 3:
                oled_write_P(PSTR("Apps\n"), false);
        }

        // Host Keyboard LED Status
        led_t led_usb_state = host_keyboard_led_state();
        oled_write_P(led_usb_state.caps_lock ? PSTR("CAPsLCK ") : PSTR("       "), false);
    } 
    return false;
}
#endif
/*#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_180;
}

bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR(" "), false);

    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("Kei46\n"), false);
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

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4,
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4,
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,0x00
    };

    oled_write_P(qmk_logo, false);
}

bool oled_task_user(void) {
    render_logo();
    return false;
}


#endif*/

#ifdef ENCODER_ENABLE
    bool encoder_update_user(uint8_t index, bool clockwise) {
        switch (index) {
            case 0:
                if (IS_LAYER_ON(_BASE)) {
                if (clockwise) {
                    tap_code(KC_VOLD); // VOLUME DOWN
            } else {
                tap_code(KC_VOLU); // VOLUME UP
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
                tap_code(KC_WH_U);  // MOUSE WHELL UP
            } else {
                tap_code(KC_WH_D); // MOUSE WHELL DOWN
            }
			}	
    }
	switch (index) {
		case 0:
			if (IS_LAYER_ON(_APPS)) {
            if (clockwise) {
                tap_code(KC_MPRV); // Previous Track
            } else {
                tap_code(KC_MNXT); // Next Track
            }
			}	
    }   
    return true;
}

#endif