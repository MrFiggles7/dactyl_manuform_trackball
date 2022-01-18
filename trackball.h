#pragma once

#include "quantum.h"
#include "analog.h"
#include "opt_encoder.h"
#include "dactyl_manuform.h"

#define XXX KC_NO

#define LAYOUT_5x6( \
    L00, L01, L02, L03, L04, L05,                          R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15,                          R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25,                          R20, R21, R22, R23, R24, R25, \
    L30, L31, L32, L33, L34, L35,                          R30, R31, R32, R33, R34, R35, \
              L42, L43,                                              R42, R43, \
                        L44, L45,                          R40, R41, \
                                  L54, L55,      R50, R51, \
                                  L52, L53,      R52, R53 \
) { \
    { L00, L01, L02, L03, L04, L05 }, \
    { L10, L11, L12, L13, L14, L15 }, \
    { L20, L21, L22, L23, L24, L25 }, \
    { L30, L31, L32, L33, L34, L35 }, \
    { XXX, XXX, L42, L43, L44, L45 }, \
    { XXX, XXX, L52, L53, L54, L55 }, \
\
    { R00, R01, R02, R03, R04, R05 }, \
    { R10, R11, R12, R13, R14, R15 }, \
    { R20, R21, R22, R23, R24, R25 }, \
    { R30, R31, R32, R33, R34, R35 }, \
    { R40, R41, R42, R43, XXX, XXX }, \
    { R50, R51, R52, R53, XXX, XXX } \
}


// Trackball Shit

#define OPT_ENC1 F0
#define OPT_ENC2 F4
#define OPT_ENC1_MUX 0
#define OPT_ENC2_MUX 4

typedef union {
    uint32_t raw;
    struct {
        uint8_t dpi_config;
    };
} keyboard_config_t;

extern keyboard_config_t keyboard_config;
extern uint16_t          dpi_array[];

enum ploopy_keycodes {
#ifdef VIA_ENABLE
    DPI_CONFIG = USER00,
#else
    DPI_CONFIG = SAFE_RANGE,
#endif
    DRAG_SCROLL,
#ifdef VIA_ENABLE
    PLOOPY_SAFE_RANGE = SAFE_RANGE,
#else
    PLOOPY_SAFE_RANGE,
#endif
};

bool encoder_update_user(uint8_t index, bool clockwise);
bool encoder_update_kb(uint8_t index, bool clockwise);