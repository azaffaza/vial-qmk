# Sicpad

![sicpad](imgur.com image replace me!)

A typical 2x3 macropad with per-key RGB lighting, RGB underglow, and a rotary encoder. **Do note that there are two versions available, one with Pi Pico Zero and the other with STM32 embedded MCU. Please use the appropriate firmware.**

* Keyboard Maintainer: [Abizar Faza](https://github.com/azaffaza)
* Hardware Supported: Open-source Sicpad PCB at [azafactory](https://github.com/azaffaza/azafactory).
* Hardware Availability: These PCBs are open-source so you can manufacture them by yourself or order from a factory.

Make example for this keyboard (after setting up your build environment):

    make azafactory/sicpad/picozero:default
    make azafactory/sicpad/stm32:default

Flashing example for this keyboard:

    make azafactory/sicpad/picozero:default:flash
    make azafactory/sicpad/stm32:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
