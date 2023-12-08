/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

//RGB Matrix
#define WS2812_DI_PIN B15
#define WS2812_SPI SPID2 // default: SPID1
#define WS2812_SPI_MOSI_PAL_MODE 0 // MOSI pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 5
#define WS2812_SPI_SCK_PIN B13 // Required for F072, may be for others -- SCK pin, see the respective datasheet for the appropriate values for your MCU. default: unspecified
#define WS2812_SPI_SCK_PAL_MODE 0 // SCK pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 5
//#define WS2812_SPI_USE_CIRCULAR_BUFFER // In case of flickering.
//#define WS2812_SPI_DIVISOR 16 // Only divisors of 2, 4, 8, 16, 32, 64, 128 and 256 are supported by hardware.

//RGB Underglow
#define APA102_SPI SPID1 // default: SPID1
#define APA102_SPI_MOSI_PAL_MODE 0 // MOSI pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 5
#define APA102_SPI_SCK_PIN B3 // Required for F072, may be for others -- SCK pin, see the respective datasheet for the appropriate values for your MCU. default: unspecified
#define APA102_SPI_SCK_PAL_MODE 0 // SCK pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 5
//#define APA102_SPI_USE_CIRCULAR_BUFFER // In case of flickering.
//#define APA102_SPI_DIVISOR 16 // Only divisors of 2, 4, 8, 16, 32, 64, 128 and 256 are supported by hardware.