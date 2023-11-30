# WPM-3000

![wpm-3000](imgur.com image replace me!)

A basic steno keyboard. Do note that there are two versions available, one with Pro Micro and the other uses STM32 embedded MCU. Please use the appropriate firmware.

* Keyboard Maintainer: [Abizar Faza](https://github.com/azaffaza)
* Hardware Supported: Open-source WPM-3000 PCB at [azafactory](https://github.com/azaffaza/azafactory).
* Hardware Availability: These PCBs are open-source so you can manufacture them by yourself or order from a factory.

Make example for this keyboard (after setting up your build environment):

    make azafactory/wpm_3000/stm32:default 
    make azafactory/wpm_3000/promicro:default

Flashing example for this keyboard:

    make azafactory/wpm_3000/stm32:default:flash
    make azafactory/wpm_3000/promicro:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
