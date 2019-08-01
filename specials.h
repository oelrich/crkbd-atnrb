#pragma once

#include "keymap_swedish.h"

// Named layers
#define _BASE 0
#define _SYMB 1
#define _CODE 2
#define _FNCT 4
#define _MOVE 7
#define _CTRL 9
#define _MIDI 10

#define BASE TO(_BASE)
#define SYMB TO(_SYMB)
#define CODE TO(_CODE)
#define FNCT TO(_FNCT)
#define MOVE TO(_MOVE)
#define CTRL TO(_CTRL)
#define MIDI TO(_MIDI)

#define MS_UP KC_MS_UP
#define MS_DOWN KC_MS_DOWN
#define MS_LEFT KC_MS_LEFT
#define MS_RGHT KC_MS_RIGHT

#define MS_BTN1 KC_MS_BTN1
#define MS_BTN2 KC_MS_BTN2
#define MS_BTN3 KC_MS_BTN3
#define MS_BTN4 KC_MS_BTN4
#define MS_BTN5 KC_MS_BTN5

#define MS_SCUP KC_MS_WH_UP
#define MS_SCDN KC_MS_WH_DOWN
#define MS_SCLE KC_MS_WH_LEFT
#define MS_SCRI KC_MS_WH_RIGHT

#define MS_ACC0 KC_MS_ACCEL0
#define MS_ACC1 KC_MS_ACCEL1
#define MS_ACC2 KC_MS_ACCEL2

#define NO_PERC LSFT(KC_5)