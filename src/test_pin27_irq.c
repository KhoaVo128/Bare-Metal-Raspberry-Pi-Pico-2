#include "systick.h"
#include "led.h"
#include <stdint.h>
#include "interrupt.h"
#include "pin27.h"


int main ( void )
{
	uint16_t cntr = -1;

	__disable_irq();
	configure_systick(1000);
	configure_pin27();
	configure_led();
	__enable_irq();

	while(1)
	{
		__asm__("WFI");
		if( !system_tick() )
			continue;

		cntr++;
		switch(cntr){
			case 0: turn_on_led();
				break;
			case 500: turn_off_led();
				break;
			case 5000:
				cntr = -1;
		}
		if( get_pin27() )
			turn_on_led();
	}
    return(0);
}
