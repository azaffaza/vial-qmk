#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
		{02, 01, 00},
		{05, 04, 03}
	}, {
		{56, 0}, {112, 0}, {0, 0},
		{56, 64}, {112, 64}, {0, 64}
	}, {
		4,4,4,
		4,4,4
	} };
#endif