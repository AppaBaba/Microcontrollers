/*
 * Atmega328pCblink.c
 *
 * Created: 7/17/2019 10:49:53 AM
 * Author : Appa
 */ 

#define F_CPU 16000000
#define OneSecDelay 1000

#include <avr/io.h>
#include <util/delay.h>

int main (void)
{
	// digital pin 13 (pin 5 of PORTB) for output
	DDRB |= 0B100000; // PORTB5
	
	while(1) {
		// LED on
		PORTB |= 0B100000; // PORTB5
		_delay_ms(OneSecDelay);
		
		// LED off
		PORTB &= ~ 0B100000; // PORTB5
		_delay_ms(OneSecDelay);
	}
}

