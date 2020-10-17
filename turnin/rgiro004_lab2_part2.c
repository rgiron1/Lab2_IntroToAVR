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
    /* Insert your solution below */
    while (1) {
	 tmpA = PINA;
	unsigned char tmpC = 4;
	if(tmpA & 0x01){
		tmpC--;
	}
	 if(tmpA & 0x02){
		tmpC--;
	}
	if(tmpA & 0x04){
		tmpC--;
	}
	if(tmpA & 0x08){
		tmpC--;
	}
	PORTC = tmpC;

    }
    return 0;
}
