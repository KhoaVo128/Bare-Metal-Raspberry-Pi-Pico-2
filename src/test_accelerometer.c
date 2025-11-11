#include "usbcdc.h"
#include "spi0.h"
#include <stdio.h>
#include <stdint.h>

int (* _stdin_getchar)( char *c) = usbcdc_getchar;
int (* _stdout_putchar)( char c) = usbcdc_putchar;

#define READ_CMD (1<<7)
#define WRITE_CMD 0
#define RW_MULTIPLE (1<<6)
#define DUMMY 0

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
				spi0_write(READ_CMD | 0x0F);
				spi0_write(DUMMY);
				break;
			case 'c':
				spi0_write(WRITE_CMD | RW_MULTIPLE | 0x1e);
				spi0_write(0x90);
				spi0_write(0x00);
				spi0_write(0x57);
				spi0_write(0x00);
				spi0_write(0x00);
				spi0_write(0x00);
				break;
			case 'r':
				spi0_write(READ_CMD | RW_MULTIPLE | 0x28);
				spi0_write(0x00);
				spi0_write(0x00);
				spi0_write(0x00);
				spi0_write(0x00);
				spi0_write(0x00);
				spi0_write(0x00);
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
