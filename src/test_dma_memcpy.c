#include "usbcdc.h"
#include "dma_memcpy.h"

const char *msg8="If you are reading this then 8b DMA memcpy works!\n\r";

const uint16_t *msg16 = (uint16_t []){
	'I' | 'f' << 8,
	' ' | 'y' << 8,
	'o' | 'u' << 8,
	' ' | 'a' << 8,
	'r' | 'e' << 8,
	' ' | 'r' << 8,
	'e' | 'a' << 8,
	'd' | 'i' << 8,
	'n' | 'g' << 8,
	' ' | 't' << 8,
	'h' | 'i' << 8,
	's' | ' ' << 8,
	't' | 'h' << 8,
	'e' | 'n' << 8,
	' ' | '1' << 8,
	'6' | 'b' << 8,
	' ' | 'D' << 8,
	'M' | 'A' << 8,
	' ' | 'w' << 8,
	'o' | 'r' << 8,
	'k' | 's' << 8,
	'!' | '\n' << 8,
	'\r' | 0 << 8
};

const uint32_t *msg32 = (uint32_t []){
	'I' | 'f' << 8 | ' ' << 16 | 'y' << 24,
	'o' | 'u' << 8 | ' ' << 16 | 'a' << 24,
	'r' | 'e' << 8 | ' ' << 16 | 'r' << 24,
	'e' | 'a' << 8 | 'd' << 16 | 'i' << 24,
	'n' | 'g' << 8 | ' ' << 16 | 't' << 24,
	'h' | 'i' << 8 | 's' << 16 | ' ' << 24,
	't' | 'h' << 8 | 'e' << 16 | 'n' << 24,
	' ' | '3' << 8 | '2' << 16 | 'b' << 24,
	' ' | 'D' << 8 | 'M' << 16 | 'A' << 24,
	' ' | 'w' << 8 | 'o' << 16 | 'r' << 24,
	'k' | 's' << 8 | '!' << 16 | '\n' << 24,
	'\r' | 0 << 8
};

int main()
{
	char c;
	//Auto variables are aligned on uint32!
	char buf[100]="If you are reading this no DMA has been performed";

	__asm__ volatile ("cpsid i");
	configure_usbcdc();
	__asm__ volatile ("cpsie i");


	while(1){
		while(!usbcdc_getchar(&c) )
			continue;
		if( c == '1' )
		{
			memcpy8( (uint8_t *)buf, (uint8_t *)msg8, 52 );
			continue;
		}
		else if( c == '2' )
		{
			memcpy16( (uint16_t *)buf, msg16, 52/2 );
			continue;
		}
		else if( c == '3' )
		{
			memcpy32( (uint32_t *)buf, msg32, 52/4 );
			continue;
		}
		else if( c == 'p' )
		{
			for( char *p=buf; *p != 0; p++ )
				usbcdc_putchar(*p);
		}
	}
}
