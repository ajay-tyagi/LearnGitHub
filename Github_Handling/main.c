/*
 * Github_Handling.c
 *
 * Created: 1/30/2022 2:45:51 PM
 * Author : DELL
 */ 
#define F_CPU 1000000
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB=0xff;
	PORTB=0xff;
		
    while (1) 
    {
		PORTB=0x00;
		_delay_ms(10000);
		 PORTB=0xff;
	  _delay_ms(10000);
    }
}

