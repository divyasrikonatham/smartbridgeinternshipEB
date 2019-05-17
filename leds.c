/*
 *led2
 *
 * Created: 09-05-2019 14:16:50
 * Author : AMRUTHA
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB= 0XFF;
	DDRD= 0XFF;
	DDRA= 0XFF;
	DDRC= 0XFF;
	
    /* Replace with your application code */
    while (1) 
    {
		PORTB= 0XFF;
		_delay_ms(100);
		PORTB=0X00;
		_delay_ms(1000);
		PORTA= 0XFF;
		_delay_ms(100);
		PORTA=0X00;
		_delay_ms(1000);
		PORTC= 0XFF;
		_delay_ms(100);
		PORTC=0X00;
		_delay_ms(1000);
		PORTD= 0XFF;
		_delay_ms(100);
		PORTD=0X00;
		_delay_ms(1000);
    }
}



