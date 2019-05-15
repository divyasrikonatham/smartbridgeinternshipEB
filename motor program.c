/*
 * motor1.c
 *
 * Created: 15-05-2019 14:12:31
 * Author : AMRUTHA
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>



int main(void)
{
	DDRB=0XFF;
    /* Replace with your application code */
    while (1) 
    {
		PORTB =0X02;
		_delay_ms(2000);
		PORTB =0X00;
		_delay_ms(2000);
		PORTB =0X01;
		_delay_ms(2000);
		PORTB =0X00;
		_delay_ms(2000);
		
		
    }
}

