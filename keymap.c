#include QMK_KEYBOARD_H
//#include "bootloader.h"

#include "specials.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;
///// Special key definitioins
// Three outer keys on the left hand side
#define LEUPR KC_LGUI
#define LEMID KC_LCTRL
#define LELOW KC_LALT
// Three outer keys on the right hand side
#define RIUPR BASE
#define RIMID KC_ENTER
#define RILOW KC_RALT
// Three thumb keys on the left hand side
#define LETIN KC_BSPACE
#define LETHO KC_LSHIFT
#define LETOT LT(_CODE, KC_ESC)
// Three thumb keys on the right hand side
#define RITIN LT(_MOVE, KC_TAB)
#define RITHO KC_SPACE
#define RITOT LT(_SYMB, KC_DEL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Seriously??
    [_BASE] = LAYOUT(                                                                                            //
        LEUPR, CTRL, KC_C, NO_AA, KC_W, KC_Z, KC_X, KC_J, KC_P, NO_AE, KC_Q, RIUPR,                              //
        LEMID, KC_A, KC_T, KC_N, KC_R, KC_B, KC_Y, KC_O, KC_S, KC_I, KC_E, RIMID,                                //
        LELOW, KC_D, KC_M, KC_U, KC_K, KC_V, NO_OSLH, KC_G, KC_F, KC_H, KC_L, RILOW,                             //
        LETIN, LETHO, LETOT, RITOT, RITHO, RITIN),                                                               //
    [_SYMB] = LAYOUT(                                                                                            //
        LEUPR, NO_ACUT, NO_LCBR, NO_LPRN, NO_LBRC, NO_CIRC, NO_TILD, NO_RBRC, NO_RPRN, NO_RCBR, NO_GRV, RIUPR,   //
        LEMID, NO_AT, NO_EQL, NO_PLUS, NO_ASTR, NO_LESS, NO_GRTR, NO_SLSH, NO_PIPE, NO_BSLS, NO_AMPR, RIMID,     //
        LELOW, NO_APOS, NO_MINS, NO_SCLN, KC_COMM, NO_QUES, KC_EXLM, KC_DOT, NO_COLN, NO_UNDS, NO_QUO2, RILOW,   //
        LETIN, LETHO, LETOT, RITOT, RITHO, RITIN),                                                               //
    [_CODE] = LAYOUT(                                                                                            //
        LEUPR, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, RIUPR,                     //
        LEMID, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, RIMID,                                //
        LELOW, NO_QUOT, NO_SECT, NO_HALF, NO_PERC, KC_PSCR, NO_BULT, KC_HASH, NO_DLR, NO_PND, NO_EURO, RILOW,    //
        LETIN, LETHO, LETOT, RITOT, RITHO, RITIN),                                                               //
    [_FNCT] = LAYOUT(                                                                                            //
        LEUPR, KC_F21, KC_F22, KC_F23, KC_F24, KC_NO, KC_NO, KC_NO, KC_CAPS, KC_NO, KC_NO, RIUPR,                //
        LEMID, KC_F11, KC_F12, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, RIMID,            //
        LELOW, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, RILOW,                     //
        LETIN, LETHO, LETOT, RITOT, RITHO, RITIN),                                                               //
    [_MOVE] = LAYOUT(                                                                                            //
        LEUPR, MS_SCUP, MS_BTN4, MS_UP, MS_BTN5, MS_ACC0, KC_NO, KC_HOME, KC_UP, KC_END, KC_NO, RIUPR,           //
        LEMID, MS_BTN1, MS_LEFT, MS_DOWN, MS_RGHT, MS_ACC1, KC_PGUP, KC_LEFT, KC_DOWN, KC_RGHT, KC_MEH, RIMID,   //
        LELOW, MS_SCDN, MS_BTN1, MS_BTN2, MS_BTN3, MS_ACC2, KC_PGDN, KC_NO, KC_NO, KC_NO, KC_LCTL, RILOW,        //
        LETIN, LETHO, LETOT, RITOT, RITHO, RITIN),                                                               //
    [_CTRL] = LAYOUT(                                                                                            //
        LEUPR, BASE, KC_MPRV, KC_MNXT, KC_MSTP, KC_MPLY, KC_WHOM, KC_WFAV, KC_NO, KC_NO, KC_NO, RIUPR,           //
        LEMID, SYMB, CODE, KC_NO, FNCT, KC_NO, KC_NO, MOVE, KC_NO, CTRL, KC_NO, RIMID,                           //
        LELOW, KC_MPRV, KC_MNXT, KC_VOLD, KC_VOLU, KC_MUTE, KC_WSCH, KC_WBAK, KC_WREF, KC_WSTP, KC_WFWD, RILOW,  //
        LETIN, LETHO, LETOT, RITOT, RITHO, RITIN)                                                                //
};