#include "usbcdc.h"
#include "spi0.h"
#include <stdio.h>
#include <stdint.h>

int (* _stdin_getchar)( char *c) = usbcdc_getchar;
int (* _stdout_putchar)( char c) = usbcdc_putchar;

int main()
{
	configure_spi0();
	configure_usbcdc();
	while(1)
	{
		char c;
		if( usbcdc_getchar(&c))
		{
			uint8_t x=0;
			switch(c){
			case 'w':
				usbcdc_putchar('.');
				spi0_write(0x80 | 0x0F);
				spi0_write(0x00);
				break;
			case 'r':
				spi0_write(0x1e);
				spi0_write(0x10);
				break;
			case 'p':
				if( spi0_read(&x) )
					printf("%02x\n\r",x);
				break;
			default:
				break;
			}
		}
	}
	return 0;
}
