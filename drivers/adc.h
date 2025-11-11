#ifndef ADC_H
#define ADC_H
#include <stdbool.h>
#include <stdint.h>

typedef enum {PIN26_CHANNEL, PIN27_CHANNEL, PIN28_CHANNEL, PIN29_CHANNEL}
	adc_channel_t;

void configure_adc();
void start_adc( adc_channel_t );
_Bool get_adc_conversion_result( uint16_t *result );


#endif
