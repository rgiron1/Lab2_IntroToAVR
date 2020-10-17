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
	DDRC = 0xCC; PORTC = 0xFF;
	unsigned char tmpA = 0x00;
	unsigned char tmpC;
	unsigned char full = 0;
    /* Insert your solution below */
    while (1) {
	tmpA = PINA;
	tmpC = 4;

	if(PINA & 0x01){
		tempC--;
	} else if(PINA & 0x02){
		tmpC--;
	} else if(PINA & 0x04){
		tmpC--;
	} else if(PINA & 0x08){
		tmpC--;
	}
	PORTC = tmpC;
	if(tmpC == 0){
		full = 0x80;
		PORTC = tmpC | full;
	}

    }
    return 0;
}
