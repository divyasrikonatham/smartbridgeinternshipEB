/*
 * timer delay.c
 *
 * Created: 15-05-2019 10:32:48
 * Author : AMRUTHA
 */ 

#include<avr/io.h>
#define LED PB0 



int main( )
{
	uint8_t timerOverflowCount = 0;
	DDRB=0xff;
	TCNT0 = 0x00;
	TCCR0 = (1<<CS00)|(1<<CS02);
    /* Replace with your application code */
    while (1) 
    {
		while((TIFR&0X01)==0);
		TCNT0 = 0X00;
		TIFR = 0X01;
		timerOverflowCount++;
		if(timerOverflowCount>=10)
		{
			PORTB^=(0X01<<LED);
			timerOverflowCount=0;
		}
	}
		
    
}


