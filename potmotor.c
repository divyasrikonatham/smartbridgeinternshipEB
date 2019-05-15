/*
 * switchpotmotor.c
 *
 * Created: 15-05-2019 15:46:35
 * Author : AMRUTHA
 */
 #define F_CPU 8000000UL
 #include <avr/io.h>
 #include <util/delay.h>
 void PWM_init()
 {
	 TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
	 DDRB|=(1<<PB3);
 }

 int main(void)
 {
	 
	 PWM_init();
	 /* Replace with your application code */
	 while (1)
	 {
		 
		 if((PIND & (1<<PD0)) ==0)
			 {
				 OCR0 =150;
			 _delay_ms(12);
			 }
		 
		 if((PIND & (1<<PD1)) ==0)
			  {
			 OCR0 = 200;
			 _delay_ms(12);
			  }
		 
	 }
 }






