#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_Q, KC_W, KC_E,
        KC_A, KC_S, KC_D
    )

};

/*
 * Rotary encoder
 *
 * Clockwise      = Scroll Up
 * Counter-clockwise = Scroll Down
 */

#if defined(ENCODER_MAP_ENABLE)

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

    [0] = {
        ENCODER_CCW_CW(MS_WHLD, MS_WHLU)
    }

};

#endif