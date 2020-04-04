/*
 * File:   main.c
 * Author: H&M
 *
 * Created on April 4, 2020, 8:21 PM
 */


#include <avr/io.h>
enum Leds{LED0 =0,LED1,LED2};

void LedOnAll(void);
void LedOn(int x);
void BuzzerOn(void);
void RelayOn(void);
int main(void) {
    /* Replace with your application code */
    
    RelayOn();
    while (1) {
    }
}

void LedOnAll(void){
    DDRC = 0x84;
    DDRD = 0x08;
    
    PORTC = 0x84;
    PORTD = 0x08;
}

void LedOn(int x){
    if(x== LED2){
        DDRD |= (1<<3);
        PORTD |= (1<<3);
    }
    else if(x== LED1){
            DDRC |= (1<<7);
            PORTC |= (1<<7);
        }
        else if (x==LED0){
            DDRC |= (1<<2);
           PORTC |= (1<<2);
           }
}

void BuzzerOn(void){
    DDRA |= (1<<3);
    PORTA |= (1<<3);
}

void RelayOn(void){
     DDRA |= (1<<2);
     PORTA |= (1<<2);
}