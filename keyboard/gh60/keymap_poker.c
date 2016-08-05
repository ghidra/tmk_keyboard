#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(ESC, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, MINS, EQL, BSPC,\
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,\
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,\
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,\
        LCTL,LGUI,LALT,          SPC,                RALT,PAUS,     FN0, SPC ),
    /* 0: function 1 */
    KEYMAP( GRV,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11,  F12,  DEL, \
           MUTE, TRNS,   UP, TRNS, TRNS, TRNS, TRNS,   P7,   P8,   P9, TRNS, TRNS, TRNS, PSCR, \
           VOLU, LEFT, DOWN,RIGHT, TRNS, TRNS, TRNS,   P4,   P5,   P6, SCLN, QUOT,       HOME, \
           VOLD, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   P1,   P2,   P3, PGUP,              END, \
           LSFT, TRNS, TRNS,               P0,                   PGDN, TRNS,       TRNS, TRNS),
};
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};