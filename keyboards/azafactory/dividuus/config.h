/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 3
#define NO_ACTION_ONESHOT
#define FORCE_NKRO

#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN A2     // USART TX pin
#define SERIAL_USART_RX_PIN A3     // USART RX pin
#define SERIAL_USART_PIN_SWAP      // Swap TX and RX pins if keyboard is master halve. (Only available on some MCUs)
#define SERIAL_USART_TX_PAL_MODE 1 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
 #define SERIAL_USART_DRIVER SD2