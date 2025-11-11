#include "adc.h"
#include <stdio.h>
#include "usbcdc.h"

int (* _stdin_getchar)( char *c) = usbcdc_getchar;
int (* _stdout_putchar)( char c) = usbcdc_putchar;

void main()
{
	__asm__ volatile ("cpsid i");
	configure_usbcdc();
	configure_adc();
	__asm__ volatile ("cpsie i");

	while(1){
		uint16_t adc_out;
		while(getchar() == -1)
			continue;
		start_adc(PIN26_CHANNEL);
		while( !get_adc_conversion_result(&adc_out));
		printf("ADC output: 0x%04x\n\r",adc_out);
	}
}
