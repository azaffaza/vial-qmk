/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 2
#define NO_ACTION_ONESHOT

//RGB Matrix
#define RGB_MATRIX_LED_COUNT 6
#define WS2812_DI_PIN B15
#define WS2812_SPI SPID2 // default: SPID1
#define WS2812_SPI_MOSI_PAL_MODE 0 // MOSI pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 5
#define WS2812_SPI_SCK_PIN B13 // Required for F072, may be for others -- SCK pin, see the respective datasheet for the appropriate values for your MCU. default: unspecified
#define WS2812_SPI_SCK_PAL_MODE 0 // SCK pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 5
//#define WS2812_SPI_USE_CIRCULAR_BUFFER // In case of flickering.
//#define WS2812_SPI_DIVISOR 16 //Only divisors of 2, 4, 8, 16, 32, 64, 128 and 256 are supported by hardware.

//RGB Underglow
#define RGBLED_NUM 6
#define APA102_SPI SPID1 // default: SPID1
#define APA102_SPI_MOSI_PAL_MODE 0 // MOSI pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 5
#define APA102_SPI_SCK_PIN B3 // Required for F072, may be for others -- SCK pin, see the respective datasheet for the appropriate values for your MCU. default: unspecified
#define APA102_SPI_SCK_PAL_MODE 0 // SCK pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 5
//#define APA102_SPI_USE_CIRCULAR_BUFFER // In case of flickering.
//#define APA102_SPI_DIVISOR 16 //Only divisors of 2, 4, 8, 16, 32, 64, 128 and 256 are supported by hardware.

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_DUAL_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define ENABLE_RGB_MATRIX_HUE_BREATHING
#define ENABLE_RGB_MATRIX_HUE_PENDULUM
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#define ENABLE_RGB_MATRIX_PIXEL_FLOW
#define ENABLE_RGB_MATRIX_PIXEL_RAIN
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define ENABLE_RGB_MATRIX_SPLASH
#define ENABLE_RGB_MATRIX_MULTISPLASH
#define ENABLE_RGB_MATRIX_SOLID_SPLASH
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH