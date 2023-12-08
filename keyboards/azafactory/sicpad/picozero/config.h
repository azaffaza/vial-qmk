/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

//RGB Matrix
#define WS2812_DI_PIN GP8

//RGB Underglow
#define APA102_SPI SPID0

#define NOP_FUDGE 0.4
#define APA102_NOPS (100 / (1000000000L / (133 / 4)))