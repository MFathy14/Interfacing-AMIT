/*
 * File:   main.c
 * Author: H&M
 *
 * Created on April 12, 2020, 2:04 PM
 */

#include <avr/io.h>
#include "Board_Config.h"
#include "DIO.h"
#include "lcd.h"

int led0_state = 0;
int led1_state = 0;
int led2_state = 0;

char str[] = ">> Hello 7amo <<";

char led0On[]= ">> LED0 is ON <<";
char led1On[]= ">> LED1 is ON <<";
char led2On[]= ">> LED2 is ON <<";
char buzzOn[]= " >>BUZZER";

char led0OFF[]= ">> LED0 is OFF <<";
char led1OFF[]= ">> LED1 is OFF <<";
char led2OFF[]= ">> LED2 is OFF <<";


int main(void) {
    setDDB(BUTTON0, IN);
    setDDB(BUTTON1, IN);
    setDDD(BUTTON2, IN);
    setDDC(LED0, OUT);
    setDDC(LED1, OUT);
    setDDD(LED2, OUT);
    
    LCD_Init();
    _delay_ms(100);
    resetPortA(BUZZER);
    resetPortA(RELAY);
    
    LCD_String(str);
    
    while (1) {
        
         if (isPressedB(BUTTON0)) {
             if(led0_state == LOW){
                 LCD_Clear();
                 LCD_String(led0On);
                 led0_state = HIGH;
             }
             else{
                 LCD_Clear();
                 LCD_String(led0OFF);
                 led0_state = LOW;
             }
        togglePinC(LED0);
        _delay_ms(500);
        
    }

    if (isPressedB(BUTTON1)) {
        if(led1_state == LOW){
                 LCD_Clear();
                 LCD_String(led1On);
                 led1_state = HIGH;
             }
             else{
                 LCD_Clear();
                 LCD_String(led1OFF);
                 led1_state = LOW;
             }
        togglePinC(LED1);
        _delay_ms(500);
    }

    if (isPressedD(BUTTON2)) {
        if(led2_state == LOW){
                 LCD_Clear();
                 LCD_String(led2On);
                 led2_state = HIGH;
             }
             else{
                 LCD_Clear();
                 LCD_String(led2OFF);
                 led2_state = LOW;
             }
        togglePinD(LED2);
        _delay_ms(500);
    }


    if (led0_state && led1_state && led2_state) {
        BuzzerOn();
    } else {
        BuzzerOff();
    }
    }
}