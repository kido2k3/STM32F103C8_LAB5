/*
 * my_adc.c
 *
 *  Created on: Dec 6, 2023
 *      Author: HP
 */

#include "my_adc.h"
#ifdef TEST
uint16_t val = 85;
#endif
extern ADC_HandleTypeDef hadc1;
uint16_t adc_GetValue(void) {
#ifdef TEST

	return val++ %4096;
#else
	return HAL_ADC_GetValue(&hadc1);
#endif
}
