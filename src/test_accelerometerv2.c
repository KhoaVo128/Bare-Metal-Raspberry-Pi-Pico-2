/*
	KHOA THANH VO
	ACCELEROMETER MAIN TEST PROGRAM
*/
#include "usbcdc.h"
#include "accelerometer.h"
#include <stdio.h>

int (* _stdin_getchar)( char *c) = usbcdc_getchar;
int (* _stdout_putchar)( char c) = usbcdc_putchar;
void read_command(char c);
uint8_t char_to_int(char c);

int main(){	
	char c;
	configure_usbcdc();
	configure_accelerometer();
	while(1){
		if(usbcdc_getchar(&c)){
			usbcdc_putchar(c);
			read_command(c);
		}
	}
	return 0;
}

void read_command(char c){
	static uint8_t address_LSByte;
	static uint8_t address_MSByte;
	static uint8_t address;
	static _Bool flag_write_to_reserved;
	static _Bool flag_reg_out_of_reach;
	static uint8_t value_LSByte;
	static uint8_t value_MSByte;
	static uint8_t value;
	
	static enum{
					IDLE, ERROR,
					GET_READ_ADDRESS0,GET_READ_ADDRESS1, EXE_READ,
					GET_WRITE_ADDRESS0, GET_WRITE_ADDRESS1, GET_WRITE_VALUE0, GET_WRITE_VALUE1, EXE_WRITE,
					EXE_CLEAR_FIFO
				} cmd_st = IDLE;

	switch (cmd_st){	
	case IDLE:
		flag_reg_out_of_reach = false;
		flag_write_to_reserved = false;
		address = 0;
		value = 0;
		if(c == 'R' || c == 'r'){
			cmd_st = GET_READ_ADDRESS0;
		}
		else if(c == 'W' || c == 'w'){
			cmd_st = GET_WRITE_ADDRESS0;
		}
		else if(c == 'C' || c == 'c'){
			cmd_st = EXE_CLEAR_FIFO;
		}
		else{
			cmd_st = ERROR;
		}
		break;
	case GET_READ_ADDRESS0:
		if (char_to_int(c)<=15 && char_to_int(c)>=0){
			address_MSByte = char_to_int(c);
			cmd_st = GET_READ_ADDRESS1;
		}else{
			cmd_st = ERROR;
		}
		break;
	case GET_READ_ADDRESS1:
		if (char_to_int(c)<=15 && char_to_int(c)>=0){
			address_LSByte = char_to_int(c);
			address = (address_MSByte << 4) | address_LSByte;
			if(address > 0x3F){
				flag_reg_out_of_reach = true;
				cmd_st = ERROR;
			}else{
				read_from_reg(address);
				cmd_st = EXE_READ;
			}
		}else{
			cmd_st = ERROR;
		}
		break;
	case EXE_READ:
		if(c=='\r'){
			clear_spi_fifo();
			printf("\n\rRead from register %02x the value %02x. \n\r",address,get_value());
			cmd_st = IDLE;
		}else{
			cmd_st = ERROR;
		}
		
		break;
	case GET_WRITE_ADDRESS0:
		if (char_to_int(c)<=15 && char_to_int(c)>=0){
			address_MSByte = char_to_int(c);
			cmd_st = GET_WRITE_ADDRESS1;
		}else{
			cmd_st = ERROR;
		}
		break;
	case GET_WRITE_ADDRESS1:
		if (char_to_int(c)<=15 && char_to_int(c)>=0){
			address_LSByte = char_to_int(c);
			address = (address_MSByte << 4) | address_LSByte;
			if((address>=0x00 && address<=0x06) || address == 0x0E || (address>=0x10 && address<=0x1D) || (address>0x3F)){
				flag_write_to_reserved = true;
				cmd_st = ERROR;
			}else{
				cmd_st = GET_WRITE_VALUE0;
			}
		}else{
			cmd_st = ERROR;
		}
		break;
	case GET_WRITE_VALUE0:
		if (char_to_int(c)<=15 && char_to_int(c)>=0){
			value_MSByte = char_to_int(c);
			cmd_st = GET_WRITE_VALUE1;
		}else{
			cmd_st = ERROR;
		}
		break;
	case GET_WRITE_VALUE1:
		if (char_to_int(c)<=15 && char_to_int(c)>=0){
			value_LSByte = char_to_int(c);
			value = (value_MSByte << 4) | value_LSByte;
			write_to_reg(address,value);
			cmd_st = EXE_WRITE;
		}else{
			cmd_st = ERROR;
		}
		break;
	case EXE_WRITE:
		if(c=='\r'){
			printf("\n\rWrite %02x to register %02x.\n\r",value,address);
			clear_spi_fifo();
			cmd_st = IDLE;
		}else{
			cmd_st = ERROR;
		}
		break;
	case EXE_CLEAR_FIFO:
			if(c=='\r'){
				clear_spi_fifo();
				printf("\n\rClear FIFO.\n\r");
				cmd_st = IDLE;
			}else{
				cmd_st = ERROR;
			}
		break;
	case ERROR:
		if(c == '\r'){
			printf("\n\rIvalid Command.\n\r");
			if(flag_write_to_reserved == true)printf("Write to reserved register or out of reach.\n\r");
			if(flag_reg_out_of_reach == true)printf("Register out of scope\n\r");
			cmd_st = IDLE;
		}else{
			cmd_st = ERROR;
		}
		break;
	default:
		break;
	}
}

uint8_t char_to_int(char c){
	uint8_t retval = 0xFF;
	switch(c){
		case '0':
			retval = 0;
			break;
		case '1':
			retval = 1;
			break;
		case '2':
			retval = 2;
			break;
		case '3':
			retval = 3;
			break;
		case '4':
			retval = 4;
			break;
		case '5':
			retval = 5;
			break;
		case '6':
			retval = 6;
			break;
		case '7':
			retval = 7;
			break;
		case '8':
			retval = 8;
			break;
		case '9':
			retval = 9;
			break;
		case 'a':
			retval = 10;
			break;
		case 'b':
			retval = 11;
			break;
		case 'c':
			retval = 12;
			break;
		case 'd':
			retval = 13;
			break;
		case 'e':
			retval = 14;
			break;
		case 'f':
			retval = 15;
			break;
		default:
			break;
	}
	return retval;
}
