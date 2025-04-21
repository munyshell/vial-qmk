/* Copyright 2020 Andrew Kannan
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJ
};

enum custom_keycodes {
    TD_G_CAPS = SAFE_RANGE,
};

enum {
    TD_G = 0
};

// Tap Dance
tap_dance_action_t tap_dance_actions[] = {
    [TD_G] = ACTION_TAP_DANCE_DOUBLE(KC_G, KC_CAPS)
};

// Combos
const uint16_t PROGMEM esc_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM lgui_combo[] = {KC_B, KC_N, COMBO_END};

combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(lgui_combo, KC_LGUI)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_all(
    KC_ESC,   KC_Q,        KC_W,          KC_E,                   KC_R,                   KC_T,                   KC_Y,                   KC_U,               KC_I,           KC_O,       KC_P,                 KC_LBRC, KC_RBRC,  KC_BSPC, KC_MUTE,
    KC_TAB,   KC_A,        LALT_T(KC_S),  LSFT_T(KC_D),           LCTL_T(KC_F),           TD(TD_G),               KC_H,                   LCTL_T(KC_J),       RSFT_T(KC_K),   KC_L,       RALT_T(KC_SCLN),      KC_QUOT, KC_ENT, KC_VOLU,
    KC_LSFT,  KC_Z,        KC_X,          KC_C,                   KC_V,                   KC_B,                   KC_N,                   KC_M,               KC_COMM,        KC_DOT,     KC_SLSH,              KC_RSFT, KC_UP, KC_VOLD,
    KC_NO,    KC_NO,       KC_DELETE,     LT(1, KC_BSPC),         LT(2, KC_SPACE),        KC_TAB,                 KC_NO,                  KC_NO, KC_LEFT, KC_DOWN, KC_RIGHT
  ),

  [_LOWER] = LAYOUT_all(
    KC_NO,    KC_PSCR,     KC_NO,         KC_GRAVE,               LSFT(KC_GRAVE),         KC_LBRC,                KC_RBRC,                KC_HOME,            KC_UP,          KC_END,     KC_PGUP,              KC_NO, KC_NO, KC_NO, KC_MUTE,
    KC_NO,    C(S(KC_C)),  C(S(KC_V)),    KC_QUOTE,               LSFT(KC_QUOTE),         LSFT(KC_LBRC),          LSFT(KC_RBRC),          KC_LEFT,            KC_DOWN,        KC_RIGHT,   KC_PGDN,              KC_NO, KC_NO, KC_VOLU,
    KC_NO,    KC_NO,       LCTL(KC_X),    LCTL(KC_C),             LCTL(KC_V),             KC_BSLS,                LSFT(KC_BSLS),          KC_EQUAL,           LSFT(KC_EQUAL), KC_MINUS,   LSFT(KC_MINUS),       KC_NO, KC_NO, KC_VOLD,
    KC_NO,    KC_NO,       KC_NO,         KC_NO,                  LT(3, KC_SPACE),        KC_NO,                  KC_NO,                  KC_NO, KC_NO, KC_NO, KC_NO
  ),

  [_RAISE] = LAYOUT_all(
    KC_NO,    LSFT(KC_1),  LSFT(KC_2),    LSFT(KC_3),             LSFT(KC_4),             LSFT(KC_5),             LSFT(KC_6),             LSFT(KC_7),         LSFT(KC_8),     LSFT(KC_9), LSFT(KC_0),           KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO,    KC_1,        KC_2,          KC_3,                   KC_4,                   KC_5,                   KC_6,                   KC_7,               KC_8,           KC_9,       KC_0,                 KC_NO, KC_NO, KC_NO,
    KC_F11,   KC_F1,       KC_F2,         KC_F3,                  KC_F4,                  KC_F5,                  KC_F6,                  KC_F7,              KC_F8,          KC_F9,      KC_F10,               KC_F12, KC_NO, KC_NO,
    KC_NO,    KC_NO,       KC_BSPC,       LT(3, KC_ENTER),        KC_NO,                  KC_NO,                  KC_NO,                  KC_NO, KC_NO, KC_NO, KC_NO
  ),

  [_ADJ] = LAYOUT_all(
    QK_BOOT,  UG_TOGG,     KC_NO,         KC_NO,                  KC_NO,                  KC_MUTE,                KC_NO,                  KC_NO,              KC_NO,          KC_NO,      KC_NO,                KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO,    KC_NO,       KC_NO,         KC_NO,                  C(G(KC_LEFT)),          KC_VOLU,                KC_NO,                  C(G(KC_RIGHT)),     KC_NO,          KC_NO,      KC_NO,                KC_NO, KC_NO, KC_NO,
    KC_NO,    LGUI(KC_L),  KC_NO,         KC_NO,                  C(G(KC_PGDN)),          KC_VOLD,                KC_NO,                  C(G(KC_PGUP)),      KC_NO,          KC_NO,      KC_NO,                KC_NO, KC_NO, KC_NO,
    KC_NO,    KC_NO,       KC_NO,         KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO, KC_NO, KC_NO, KC_NO
  )
};

const rgblight_segment_t PROGMEM my_layer0_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 3, HSV_RED}
);
const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 3, HSV_CYAN}
);
const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 3, HSV_PURPLE}
);
const rgblight_segment_t PROGMEM my_layer3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 3, HSV_GREEN}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_layer0_layer,
    my_layer1_layer,
    my_layer2_layer,
    my_layer3_layer
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _BASE));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, _LOWER));
    rgblight_set_layer_state(2, layer_state_cmp(state, _RAISE));
    rgblight_set_layer_state(3, layer_state_cmp(state, _ADJ));
    return state;
}
