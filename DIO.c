/*
 * File:   DIO.c
 * Author: H&M
 *
 * Created on April 12, 2020, 8:35 PM
 */


#include <xc.h>

void setPortA(int num) {
    PORTA |= (1 << num);
}

void setPortB(int num) {
    PORTB |= (1 << num);
}

void setPortC(int num) {
    PORTC |= (1 << num);
}

void setPortD(int num) {
    PORTD |= (1 << num);
}


void resetPortA(int num) {
    PORTA &= ~(1 << num);
}

void resetPortB(int num) {
    PORTB &= ~(1 << num);
}

void resetPortC(int num) {
    PORTC &= ~(1 << num);
}

void resetPortD(int num) {
    PORTD &= ~(1 << num);
}


void setDDA(int num, int dir) {
    switch (dir) {

        case(0):
            DDRA &= ~(1 << num);
            break;

        case(1):
            DDRA |= (1 << num);
            break;
    }
}

void setDDB(int num, int dir) {
    switch (dir) {

        case(0):
            DDRB &= ~(1 << num);
            break;

        case(1):
            DDRB |= (1 << num);
            break;
    }
}

void setDDC(int num, int dir) {
    switch (dir) {

        case(0):
            DDRC &= ~(1 << num);
            break;

        case(1):
            DDRC |= (1 << num);
            break;
    }
}

void setDDD(int num, int dir) {
    switch (dir) {

        case(0):
            DDRD &= ~(1 << num);
            break;

        case(1):
            DDRD |= (1 << num);
            break;
    }
}


int isPressedA(int num){
    if(PINA & (1<<num)){
        return 1;
    }
    else{
        return 0;
    }
}
int isPressedB(int num){
    if(PINB & (1<<num)){
        return 1;
    }
    else{
        return 0;
    }
}
int isPressedC(int num){
    if(PINC & (1<<num)){
        return 1;
    }
    else{
        return 0;
    }
}
int isPressedD(int num){
    if(PIND & (1<<num)){
        return 1;
    }
    else{
        return 0;
    }
}