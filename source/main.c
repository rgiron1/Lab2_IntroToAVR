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
	unsigned char cntavail = 0x00;
    /* Insert your solution below */
    while (1) {
	cntavail = 0x04;
	if(cntavail & 0x01){
		cntavail--;
	} else if(cntavail & 0x02){
		cntavail--;
	} else if(cntavail & 0x04){
		cntavail--;
	} else if(cntavail & 0x08){
		cntavail--;
	}
	PORTC = cntavail;

    }
    return 0;
}
