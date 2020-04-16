/*
 * File:   ShiftingLeds.c
 * Author: H&M
 *
 * Created on April 13, 2020, 5:29 PM
 */

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "Board_Config.h"
#include "DIO.h"

int main(void) {

    setDDC(LED0, OUT);
    setDDC(LED1, OUT);
    setDDD(LED2, OUT);

    while (1) {
        setPortC(Led0);
	_delay_ms(100);
	resetPortC(LED0);
	setPortC(LED1);
	_delay_ms(100);
	resetPortC(LED1);
	setPortD(LED2);
	_delay_ms(100);
	resetPortD(LED2);
	setPortC(LED1);
	_delay_ms(100);
	resetPortC(LED1);
}
}