/*
 * GccApplication1.c
 *
 * Created: 09-05-2019 14:16:50
 * Author : DIVYA SRI
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB= 0XFF;
    /* Replace with your application code */
    while (1) 
    {
		PORTB= 0XFF;
		_delay_ms(100);
		PORTB=0X00;
		_delay_ms(100);
    }
}

