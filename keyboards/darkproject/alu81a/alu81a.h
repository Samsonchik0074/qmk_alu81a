#ifndef ALU81A_H
#define ALU81A_H

#include "quantum.h"

#define LAYOUT_75_ansi( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,      K1E, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C,      K2E, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,           K3E, \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A,           K4C, K4E, \
    K50, K51, K52,           K56,                     K5A, K5B, K5C, K5D, K5E, K5F \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, KC_NO, K1E }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, KC_NO, K2E }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, KC_NO, KC_NO, K3E }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, KC_NO, K4C, KC_NO, K4E }, \
    { K50, K51, K52, KC_NO, KC_NO, KC_NO, K56, KC_NO, KC_NO, KC_NO, K5A, K5B, K5C, K5D, K5E } \
}

#endif