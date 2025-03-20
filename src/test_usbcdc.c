#include "usbcdc.h"
int main()
{
	char c;
	char prompt[]="Program will echo back each typed key\n\n\r";

	__asm__ volatile ("cpsid i");
	configure_usbcdc();
	__asm__ volatile ("cpsie i");

	while(!usbcdc_getchar(&c) )
		continue;

	for( char *p=prompt; *p != 0; p++ )
		usbcdc_putchar(*p);


	while(1){
		if( usbcdc_getchar(&c)){
			usbcdc_putchar(c);
		}
	}
}
