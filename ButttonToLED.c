/*
 * File:   main.c
 * Author: H&M
 *
 * Created on April 12, 2020, 2:04 PM
 */

#define F_CPU 16000000 
#include <avr/io.h>
#include <util/delay.h>
#include "Board_Config.h"
#include "DIO.h"

int led0_state = 0;
int led1_state = 0;
int led2_state = 0;

void PressToLed(void);

int main(void) {



    while (1) {
        PressToLed();
    }
}

void PressToLed(void) {

    setDDB(BUTTON0, IN);
    setDDB(BUTTON1, IN);
    setDDD(BUTTON2, IN);
    setDDC(LED0, OUT);
    setDDC(LED1, OUT);
    setDDD(LED2, OUT);

     if (isPressedB(BUTTON0)) {
          setPortC(LED0);
          led0_state = HIGH;
      } else {
          resetPortC(LED0);
          led0_state = HIGH;
      }
    
     if (isPressedB(BUTTON1)) {
          setPortC(LED1);
          led1_state = HIGH;
      } else {
          resetPortC(LED1);
          led1_state = LOW;
      }
    
     if (isPressedD(BUTTON2)) {
          setPortD(LED2);
          led2_state = HIGH;
      } else {
          resetPortD(LED2);
          led2_state = LOW;
      }
    
    /*if (isPressedD(BUTTON2) && led2_state == LOW) {
        _delay_ms(25);

        if (!isPressedD(BUTTON2)) {
            setPortD(LED2);
            led2_state = HIGH;
        } else {
            _delay_ms(100);
        }
    } else if (isPressedD(BUTTON2) && led2_state == HIGH) {
        _delay_ms(25);

        if (!isPressedD(BUTTON2)) {
            resetPortD(LED2);
            led2_state = LOW;
        }
        else {
            _delay_ms(100);
        }
    }
    */
    if (led0_state && led1_state && led2_state) {
        BuzzerOn();
    } else {
        BuzzerOff();
    }
}
