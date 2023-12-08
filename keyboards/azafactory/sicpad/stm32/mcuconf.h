#pragma once
#include_next <mcuconf.h>

#undef STM32_SPI_USE_SPI1
#define STM32_SPI_USE_SPI1 TRUE
#undef STM32_SPI_USE_SPI2
#define STM32_SPI_USE_SPI2 TRUE