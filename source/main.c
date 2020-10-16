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
	DDRB = 0x00; PORTA = 0xFF;
	DDRC = 0x00; PORTC = 0xFF;
	DDRD = 0xFF; PORTD = 0x00;
	
    /* Insert your solution below */
    while (1) {
	unsigned char tempA = PINA;
	unsigned char tempB = PINB;
	unsigned char tempC = PINC;
	unsigned char tempD = 0x00;
	unsigned char total;
	unsigned char max;
	unsigned char min;
	unsigned char diff;
	total = tempA + tempB + tempC;
	if(total > 140){
	tempD = 0x01;
	}
	if(tempA > tempC){
	max = tempA;
	min = tempC;
	}else(tempA < tempC){
	max = tempC;
	min = tempA;
	} 
	diff = max - min;
	if((diff) > 80 ){
	temp = 0x02;
	}
	total = total >> 2;
	PORTD = tempD | (total << 2);

    }
    return 0;
}
