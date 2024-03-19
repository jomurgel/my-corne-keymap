/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

// Tap Dance
enum {
  TD_ALT_ESC = 0,
  TD_SPC_CMD = 1,
  TD_CTL_GUI = 2,
  TD_GUI_CTL = 3,
  TD_A = 4,
  TD_S = 5,
  TD_T = 6,
  TD_Z = 7,
  TD_C = 8,
  TD_V = 9,
  TD_B = 10,
  TD_U = 11,
  TD_I = 12,
  TD_O = 13,
  TD_P = 14,
  TD_E = 15,
  TD_F = 16,
};

// Tap Dance Definitions
tap_dance_action_t tap_dance_actions[] = {
  // Tap once for Esc, twice for Caps Lock
  [TD_ALT_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_LALT, KC_ESC),
  [TD_SPC_CMD] = ACTION_TAP_DANCE_DOUBLE(KC_SPC, KC_LGUI),
  [TD_CTL_GUI] = ACTION_TAP_DANCE_DOUBLE(KC_LCTL, KC_LGUI),
  [TD_GUI_CTL] = ACTION_TAP_DANCE_DOUBLE(KC_LGUI, KC_LCTL),
  [TD_A] = ACTION_TAP_DANCE_DOUBLE(KC_A, LGUI(KC_A)),
  [TD_S] = ACTION_TAP_DANCE_DOUBLE(KC_S, LGUI(KC_S)),
  [TD_T] = ACTION_TAP_DANCE_DOUBLE(KC_T, LGUI(KC_T)),
  [TD_Z] = ACTION_TAP_DANCE_DOUBLE(KC_Z, LGUI(KC_Z)),
  [TD_C] = ACTION_TAP_DANCE_DOUBLE(KC_C, LGUI(KC_C)),
  [TD_V] = ACTION_TAP_DANCE_DOUBLE(KC_V, LGUI(KC_V)),
  [TD_B] = ACTION_TAP_DANCE_DOUBLE(KC_B, LGUI(KC_B)),
  [TD_U] = ACTION_TAP_DANCE_DOUBLE(KC_U, LGUI(KC_U)),
  [TD_I] = ACTION_TAP_DANCE_DOUBLE(KC_I, LGUI(KC_I)),
  [TD_O] = ACTION_TAP_DANCE_DOUBLE(KC_O, LGUI(KC_O)),
  [TD_P] = ACTION_TAP_DANCE_DOUBLE(KC_P, LGUI(KC_P)),
  [TD_E] = ACTION_TAP_DANCE_DOUBLE(KC_E, LGUI(KC_E)),
  [TD_F] = ACTION_TAP_DANCE_DOUBLE(KC_F, LGUI(KC_F)),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* ,-----------------------------------------.                ,-----------------------------------------.
 * | TAB  |  Q   |  W   |  E   |  R   |  T   |                |  Y   |  U   |  I   |  O   |  P   | BSPC |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * | LALT |  A   |  S   |  D   |  F   |  G   |                |  H   |  J   |  K   |  L   | SCLN | QUOT |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * | LSFT |  Z   |  X   |  C   |  V   |  B   |                |  N   |  M   | COMM | DOT  | SLSH | RSFT |
 * `------+------+------+------+------+------+------.  ,------+------+------+------+------+------+------|
 *                             | LCTL |MO(1) | SPC  |  | ENT  |MO(2) | LGUI |
 *                             `--------------------'  `--------------------'
 *                                                                               generated by [keymapviz] */
        [0] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, TD(TD_E), KC_R, TD(TD_T), KC_Y, TD(TD_U), TD(TD_I), KC_O, TD(TD_P), KC_BSPC, TD(TD_ALT_ESC), TD(TD_A), TD(TD_S), KC_D, TD(TD_F), KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, TD(TD_Z), KC_X, TD(TD_C), TD(TD_V), TD(TD_B), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, TD(TD_CTL_GUI), MO(1), TD(TD_SPC_CMD), KC_ENT, MO(2), TD(TD_GUI_CTL)),
/* ,-----------------------------------------.                ,-----------------------------------------.
 * | TAB  |  1   |  2   |  3   |  4   |  5   |                |  6   |  7   |  8   |  9   |  0   | BSPC |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * | LALT |      | PIPE | PLUS | TILD | LBRC |                | RBRC | GRV | EQL  | BSLS |      |      |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * | LSFT |      |      |      | LPRN | UNDS |                | MINS | RPRN |      |      |      | RSFT |
 * `------+------+------+------+------+------+------.  ,------+------+------+------+------+------+------|
 *                             | LCTL |      | SPC  |  | RSFT |      | LGUI |
 *                             `--------------------'  `--------------------'
 *                                                                               generated by [keymapviz] */

        [1] = LAYOUT_split_3x6_3(KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, TD(TD_ALT_ESC), KC_NO, KC_PIPE, KC_PLUS, KC_TILD, KC_LBRC, KC_RBRC, KC_GRV, KC_EQL, KC_BSLS, KC_NO, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_LPRN, KC_UNDS, KC_MINS, KC_RPRN, KC_NO, KC_NO, KC_NO, KC_RSFT, TD(TD_CTL_GUI), KC_TRNS, TD(TD_SPC_CMD), KC_RSFT, KC_TRNS, TD(TD_GUI_CTL)),

/* ,-----------------------------------------.                ,-----------------------------------------.
 * | ESC  |  F1  |  F2  |  F3  |  F4  |  F5  |                |      |      |  UP  |      |      | BSPC |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * | LALT | CAPS |  F6  |  F7  |  F8  |  F9  |                |TO(3) | LEFT | DOWN | RGHT |      |      |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * | LSFT | F10  | F11  | F12  | F14  | F15  |                |      |      |      |      |      | RSFT |
 * `------+------+------+------+------+------+------.  ,------+------+------+------+------+------+------|
 *                             | LCTL |      | SPC  |  | ENT  |      | LGUI |
 *                             `--------------------'  `--------------------'
 *                                                                               generated by [keymapviz] */
        [2] = LAYOUT_split_3x6_3(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_NO, KC_NO, KC_UP, KC_NO, KC_NO, KC_BSPC, TD(TD_ALT_ESC), KC_CAPS, KC_F6, KC_F7, KC_F8, KC_F9, TO(3), KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO, KC_LSFT, KC_F10, KC_F11, KC_F12, KC_F14, KC_F15, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT, TD(TD_CTL_GUI), KC_TRNS, TD(TD_SPC_CMD), KC_ENT, KC_TRNS, TD(TD_GUI_CTL)),

/* ,-----------------------------------------.                ,-----------------------------------------.
 * |      |      |      |      |      |      |                |      |      |RGB_TO|RGB_MO|RGB_RM|      |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                |TO(0) |      |RGB_VA|RGB_HU|RGB_SA|      |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * |QK_BOO|      |      |      |      |      |                |      |      |RGB_VA|RGB_HU|RGB_SA|      |
 * `------+------+------+------+------+------+------.  ,------+------+------+------+------+------+------|
 *                             | MPRV | MUTE | VOLD |  | VOLU | MPLY | MNXT |
 *                             `--------------------'  `--------------------'
 *                                                                               generated by [keymapviz] */
        [3] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, RGB_MOD, RGB_RMOD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_NO, RGB_VAI, RGB_HUI, RGB_SAI, KC_NO, QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_VAD, RGB_HUD, RGB_SAD, KC_NO, KC_MPRV, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, KC_MNXT)
};
