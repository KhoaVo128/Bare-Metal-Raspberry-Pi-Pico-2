#include "switch.h"
#include "led.h"
#include "systick.h"

int main ( void )
{
	configure_switch();
	configure_led();
    configure_systick();
	while(1){   
        if(!system_tick()){
            continue;
        }
        switch_operation();
		
        if(get_switch()){
            turn_on_led();
        }else{
            turn_off_led();
        }
	}
    return(0);
}
