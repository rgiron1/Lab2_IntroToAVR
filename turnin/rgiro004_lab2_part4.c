/*	Author: rgiro004
 *  Partner(s) Name: Jason Shweiri
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF; 
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0x00; PORTC = 0xFF;
	DDRD = 0xFF; PORTD = 0x00; 

	unsigned char tempA, tempB, tempC, tempD = 0x00;

    while (1) {
	tempA = PINA;
	tempB = PINB;
	tempC = PINC;
  

	if ((tempA + tempB + tempC) > 0x8C)
		PORTD = PORTD | 0x01;

	if (tempA > tempC) {
		if ((tempA - tempC) > 0x50)  {
			PORTD = PORTD | 0x02; }
	}
	else {
		if ((tempC - tempA) > 0x50) {
			PORTD = PORTD | 0x02; }
	}

	tempD = tempA + tempB + tempC;
	tempD = tempD >> 2;
	PORTD = tempD | PORTD;
	}
	return 0;
}
