#include "meraki.h"
#define _LAY0 0
#define _LAY1 1
#define _LAY2 2
#define _LAY3 3


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_LAY0] = LAYOUT (
	  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      //   ESC   |    Q   |    W   |    E   |    R   |   T    |                         Y   |    U   |    I   |    O   |    P   |  Back  |
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      //  LCtrl   |    A   |    S   |    D   |    F   |   G    |                         H   |    J   |    K   |    L   |   : ;  |  ' "   |
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      //  LSft   |    Z   |    X   |    C   |    V   |   B    |                         N   |    M   |  , <   |  . >   |   / ?  |  Rsft  |
      //|--------+--------+--------+--------+--------+--------|					   |--------+--------+--------+--------+--------+--------/
      //  LAlt  |ENCODER |   GUI  |   LAY1 |  SPACE |                               ENTER  |  LAY2  | RAlt	  |        |   Del  |
      //`--------------------------------------------/                              \-------------------------------------------/
	  	//ROW1 
		KC_ESC, KC_W, KC_R, KC_Y, KC_I, KC_P, 									  // ESC | W | R | Y | I | P |
		KC_Q, KC_E, KC_T, KC_U, KC_O, KC_BSPC, 									  //  Q | E | T | U | O | Back |
	    //ROW2 
		KC_LCTL, KC_S, KC_F, KC_H, KC_K, KC_SCLN, 							   	  // LCtrl | S | F | H | K | ;: |
		KC_A, KC_D, KC_G, KC_J, KC_L, KC_QUOT, 						 			  //   A   | D | G | J | L | '" |
		//ROW3 	
		KC_LSFT, KC_X, KC_V, KC_N, KC_COMM, KC_SLSH, 				 			  // LShift| X | V | N | ,<| /? |
		KC_Z, KC_C, KC_B, KC_M, KC_DOT, KC_RSFT, 				  	 			  //   Z   | C | B | M | .>| RShift
		//ROW4
		KC_LALT, MO(_LAY1), KC_ENT, KC_RALT, 						 			  // LAlt|LAY1 | Enter| RAlt
		KC_MPLY, KC_LGUI, KC_SPC, MO(_LAY2), KC_DEL),			     			  // Play | Win |  SPC | LAY2 | Del
		


	[_LAY1] = LAYOUT (
		
     //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     //    F1   |   F2   |   F3   |   F4   |   F5   |   F6   |                        /    |    *   |    -   |    7   |    8   |    9   |
     //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     //    F7   |   F8   |   F9   |   F10  |   F11  |   F12  |                        UP   |   DOT  |    +   |    4   |    5   |    6   |
     //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     //    TAB  |  HOME  |  END   |  PGUP  |  PGDN  |CAPSLOCK|                       LEFT  |  DOWN  |  RIGHT |    1   |    2   |    3   |
     //|--------+--------+--------+--------+--------+--------|					  |--------+--------+--------+--------+--------+--------/
     //  LCtrl  |  ENTER |   GUI  |        |  SPACE |                               ENTER  |  LAY3  | RAlt	 |        |    0   |
     //`--------------------------------------------/                              \-------------------------------------------/
	    //ROW1  
		KC_F1, KC_F3, KC_F5, KC_PSLS, KC_PMNS, KC_P8, 				 			  //  F1 | F3 | F5 | / | - | 8 |
		KC_F2, KC_F4, KC_F6, KC_PAST, KC_P7, KC_P9, 				 		      //  F2 | F4 | F6 | * | 7 | 9 |
	    //ROW2
		KC_F7, KC_F9, KC_F11, KC_UP, KC_PPLS, KC_P5, 							  //  F7 | F9  | F11 | UP| + | 5 |
		KC_F8, KC_F10, KC_F12, KC_PDOT, KC_P4, KC_P6, 			     			  //  F8 | F10 | F12 | . | 4 | 6 |
	    //ROW3
		KC_TAB, KC_END, KC_PGDN, KC_LEFT, KC_RIGHT, KC_P2,    		 			  //  TAB  |  END |  PGDN  | LEFT | RIGHT | 2 |
		KC_HOME, KC_PGUP, KC_CAPS, KC_DOWN, KC_P1, KC_P3,  			 			  //  HOME | PGUP |CAPSLOCK| DOWN |   1   | 3 |
	    //ROW4	
		KC_LCTL, MO(_LAY1), KC_ENT, KC_RALT, 						 			  // LCtrl|LAY1 | Enter| RAlt
		KC_ENT, KC_LGUI, KC_SPC, MO(_LAY3), KC_P0),			     				  // Enter | Win |  SPC | LAY3 | 0

	[_LAY2] = LAYOUT (
		
     //,--------------------------------------------------------.                    ,-----------------------------------------------------.
     //    TAB  |    !      |     @   |   #    |    $   |    %   |                      ^^   |    &   |    *   |   (    |    )   |  Back  |
     //|--------+-----------+---------+--------+--------+--------|                  |--------+--------+--------+--------+--------+--------|
     //   LCtrl  |Move2Screen|   XXX   | MC.STOP| MC1.REC|MC1.PLAY|                       -   |    =   |    [   |   ]    |    \   |   ``   |
     //|--------+-----------+---------+--------+--------+--------|                  |--------+--------+--------+--------+--------+--------|
     //   LSft  | TaskMang  |   XXX   | MC.STOP| MC2.REC|MC2.PLAY|                      _    |    +   |    {   |   }    |    |   |   ~~   |
     //|--------+-----------+---------+--------+--------+--------|			        |--------+--------+--------+--------+--------+--------/
     //  LAlt  | Imp.Pant  |    GUI  |  LAY3  |  SPACE |                              ENTER |        | RAlt   |        |    0   |
     //`------------------------------------------------/                                \-------------------------------------------/
	    //ROW1  
		KC_TAB, KC_AT, KC_DLR, KC_CIRC, KC_ASTR, KC_RPRN, 			 			  //  TAB | @ | $ | ^^ | * |   )  |
		KC_EXLM, KC_HASH, KC_PERC, KC_AMPR, KC_LPRN, KC_BSPC, 					  //    ! | # | % |  & | ( | bACK |
	    //ROW2
		KC_LCTL, XXXXXXX, DM_REC1, KC_MINS, KC_LBRC, KC_BSLS, 		 		      //  LCtrl |   XXX   | MC1.REC1  | - | [ |  \ |
		LSG(KC_LEFT), DM_RSTP, DM_PLY1, KC_EQL, KC_RBRC, KC_GRV, 		 		  //   XXX | MC.STOP | MC1.PLAY1 | = | ] | `` |
	    //ROW3
		KC_LSFT, XXXXXXX, DM_REC2, KC_UNDS, KC_LCBR, KC_PIPE, 		 			  //  LSft |   XXX   | MC1.REC2  | _ | { |  | |
		LCTL(LSFT(KC_ESC)), DM_RSTP, DM_PLY2, KC_PLUS, KC_RCBR, KC_TILD, 		  //   XXX | MC.STOP | MC1.PLAY2 | + | } | ~~ |
	    //ROW4	
		KC_LALT, MO(_LAY3), KC_ENT, KC_RALT, 						 		      //   LAlt  |LAY3 | Enter| RAlt
		KC_MPLY, KC_LGUI, KC_SPC, MO(_LAY2), KC_DEL),			   				  // Imp.Pant | Win |  SPC | LAY2 | Del

	[_LAY3] = LAYOUT (
		
     //,--------------------------------------------------------.                  ,-------------------------------------------------------------------------------------------------.
     //  RESET  |   XXX   |    XXX  |  XXX    |   XXX  |   XXX  |                 /    RGB_STATIC  |     RGB_BREATH    |     RGB_RAINBOW   |       RGB_SWIRL       |   XXX  |   XXX  |
     //|--------+---------+---------+---------+--------+--------|                 |----------------+-------------------+-------------------+--------+--------------+--------|--------|
     // RGB_TOG | RGB_HUI | RGB_SAI | RGB_VAI |   XXX  |   XXX  |                      RGB_SNAKE   |   RGB_KNIGHTIDER  |   RGB_CHRISTMASS  |  RGB_STATICGRADIENT   |   XXX  |   XXX  |
     //|--------+---------+---------+------- -+--------+--------|                 |----------------+-------------------+-------------------+-----------------------+--------+--------|
     // RGB_MOD | RGB_HUD | RGB_SAD | RGB_VAI |   XXX  |   XXX  |                       RGB_TEST   |         XXX       |        XXX-       |           XXX         |   XXX  |   XXX  |
     //|--------+---------+---------+---------+--------+--------|			      |------------+-----------------------+-------------------+-----------------------+--------+--------/
     //  LCtrl  |ENCODER  |   GUI   |   LAY1  |  SPACE |                                  ENTER    |         LAY2      |        RAlt   	   |                       |   Del  |
     //`---------------------------------------------/                             \---------------------------------------------------------------------------------------/
	    //ROW1  
		QK_BOOTLOADER, XXXXXXX, XXXXXXX, RGB_M_P, RGB_M_R, XXXXXXX, 		 			  //  RESET | XXX | XXX | RGB_M_P | RGB_M_R  | XXX |
		XXXXXXX, XXXXXXX, XXXXXXX, RGB_M_B, RGB_M_SW, XXXXXXX, 		 			  //   XXX  | XXX | XXX | RGB_M_B | RGB_M_SW | XXX |
	    //ROW2
		RGB_TOG, RGB_SAI, XXXXXXX, RGB_M_SN, RGB_M_X, XXXXXXX, 		 			  //  RGB_TOG | RGB_SAI | XXX | RGB_M_SN | RGB_M_X | XXX |
		RGB_HUI, RGB_VAI, XXXXXXX, RGB_M_K, RGB_M_G, XXXXXXX, 		 			  //  RGB_HUI | RGB_VAI | XXX | RGB_M_K  | RGB_M_G | XXX |
	    //ROW3
		RGB_MOD, RGB_SAD, XXXXXXX, RGB_M_T, XXXXXXX, XXXXXXX, 					  //  RGB_MOD | RGB_SAD | XXX | RGB_M_T | XXX | XXX |
		RGB_HUD, RGB_VAD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 					  //  RGB_HUD | RGB_VAD | XXX |   XXX   | XXX | XXX |
	    //ROW4	
		KC_LCTL, XXXXXXX, KC_ENT, KC_RALT, 						 				  // LCtrl|LAY1 | Enter| RAlt
		KC_MPLY, KC_LGUI, KC_SPC, XXXXXXX, KC_DEL),			     				  // Play | Win |  SPC | LAY2 | Del

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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD)  },
    [1] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD)  },
    [2] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD)  },
    [3] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD)  },
    //                  Encoder 1                                     Encoder 2
};
#endif

/*#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    switch (index) {
        case 0:
		    if (IS_LAYER_ON(_LAY0)) {
            if (clockwise) {
                tap_code(KC_VOLD); // VOLUME DOWN IN LAYER 0
            } else {
                tap_code(KC_VOLU); // VOLUME UP IN LAYER 0
            }
			}
	}		
    switch (index) {
		case 0:
			if (IS_LAYER_ON(_LAY1)) {
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
			if (IS_LAYER_ON(_LAY2)) {
            if (clockwise) {
                tap_code(KC_WH_U);  // MOUSE WHELL UP IN LAYER 2
            } else {
                tap_code(KC_WH_D); // MOUSE WHELL DOWN IN LAYER 2
            }
			}	
    }
	    switch (index) {
		case 0:
			if (IS_LAYER_ON(_LAY3)) {
            if (clockwise) {
                tap_code(KC_BRIU); // BRIGHTNESS UP IN LAYER 3
            } else {
                tap_code(KC_BRID); // BRIGHTNESS DOWN IN LAYER 3
            }
			}	
    }
    return true;
}

#endif*/
