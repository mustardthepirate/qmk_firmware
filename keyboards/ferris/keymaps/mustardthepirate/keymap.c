#include QMK_KEYBOARD_H
#include "keymap_irish.h"


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM ct_combo[] = {KC_F, KC_L, COMBO_END};
const uint16_t PROGMEM cp_combo[] = {KC_F, KC_U, COMBO_END};
const uint16_t PROGMEM pst_combo[] = {KC_F, KC_Y, COMBO_END};

combo_t key_combos[] = {
    COMBO(ct_combo, LCTL(KC_X)),
    COMBO(cp_combo, LCTL(KC_C)),
    COMBO(pst_combo, LCTL(KC_V))
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, LSFT_T(KC_A), LT(5,KC_R), LT(7,KC_S), LT(3,KC_T), KC_G, KC_M, LT(4,KC_N), LT(2,KC_E), LT(6,KC_I), RSFT_T(KC_O), KC_Z, LCTL_T(KC_X), LALT_T(KC_C), LGUI_T(KC_D), KC_V, KC_K, KC_H, RALT_T(KC_COMM), RCTL_T(KC_DOT), KC_SLSH, KC_ENT, LT(9,KC_BSPC), LT(1,KC_SPC), LT(8,KC_TAB)),
	[1] = LAYOUT_split_3x5_2(KC_TRNS, KC_TRNS, KC_COLN, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_CAPS, KC_PERC, S(KC_SCLN), KC_ESC, KC_TRNS, DF(8), KC_LGUI, KC_DEL, KC_BSPC, CW_TOGG, KC_TRNS, KC_TRNS, KC_TRNS, KC_EXLM, KC_TRNS, DF(0), KC_TRNS, RALT_T(KC_COMM), RCTL_T(KC_DOT), QK_BOOT, KC_TRNS, KC_TAB, KC_NO, KC_TRNS),
	[2] = LAYOUT_split_3x5_2(KC_TRNS, KC_TRNS, KC_PGUP, KC_PSCR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_NO, KC_NO, LCTL(KC_LALT), KC_RSFT, KC_TRNS, KC_HOME, KC_PGDN, KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_split_3x5_2(IE_TRNS, IE_TRNS, IE_TRNS, IE_TRNS, IE_TRNS, IE_TRNS, IE_UNDS, IE_PIPE, IE_QUOT, IE_PND, IE_CIRC, IE_ASTR, IE_AMPR, IE_NO, KC_LSFT, IE_HASH, IE_TILD, IE_SLSH, IE_DQUO, IE_DLR, IE_TRNS, IE_TRNS, IE_TRNS, IE_TRNS, IE_TRNS, IE_TRNS, IE_MINS, IE_BSLS, IE_GRV, IE_EURO, RGB_RMOD, IE_TRNS, IE_TRNS, RGB_MOD),
	[4] = LAYOUT_split_3x5_2(KC_TRNS, KC_COLN, KC_LT, KC_GT, KC_SCLN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, IE_AT, KC_TRNS, KC_NO, KC_EQL, KC_PLUS, KC_PERC, KC_TRNS, KC_EXLM, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_TRNS, KC_TRNS, KC_VOLU),
	[5] = LAYOUT_split_3x5_2(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS, KC_NO, KC_LALT, KC_LCTL, KC_TRNS, KC_TRNS, KC_F4, KC_F5, KC_F6, KC_F11, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[6] = LAYOUT_split_3x5_2(KC_PSLS, KC_7, KC_8, KC_9, KC_PPLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PAST, KC_4, KC_5, KC_6, KC_PMNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_0, KC_1, KC_2, KC_3, KC_PEQL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[7] = LAYOUT_split_3x5_2(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_WH_U, KC_BTN2, KC_TRNS, KC_TRNS, KC_BTN2, KC_NO, KC_BTN1, KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WH_L, KC_WH_D, KC_WH_R, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[8] = LAYOUT_split_3x5_2(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_NO, KC_MRWD, KC_MPLY, KC_MFFD, KC_NO, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_NO, KC_VOLD, KC_MUTE, KC_VOLU, KC_NO, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_NO, KC_NO, OSM(MOD_LGUI), KC_NO, KC_NO, KC_BSPC, KC_ENT, LT(1,KC_SPC), LT(8,KC_DEL)),
	[9] = LAYOUT_split_3x5_2(KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_H, KC_J, KC_K, KC_L, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




