/***********************************************************
File name:   semaforo.ino
Description:  Simula un semaforo
Author: Miguel Angel
Date: 2017/12/16
***********************************************************/
int yellowLedPin=8; //definition digital 8 pins as pin to control the LED
int redLedPin=7; //definition digital 8 pins as pin to control the LED
int greenLedPin=9; //definition digital 8 pins as pin to control the LED

void setup()
{
    pinMode(yellowLedPin,OUTPUT);    //Set the digital 8 port mode, OUTPUT: Output mode
    pinMode(redLedPin,OUTPUT);    //Set the digital 8 port mode, OUTPUT: Output mode
    pinMode(greenLedPin,OUTPUT);    //Set the digital 8 port mode, OUTPUT: Output mode
}
void loop()
{  
    digitalWrite(greenLedPin,LOW);
    digitalWrite(redLedPin,HIGH); //HIGH is set to about 5V PIN8
    delay(2000);               //Set the delay time, 1000 = 1S
    digitalWrite(redLedPin,LOW);  //LOW is set to about 5V PIN8
    yellowBlink();
    yellowBlink();
    yellowBlink();
    yellowBlink();
    digitalWrite(greenLedPin,HIGH);
    delay(2000);               //Set the delay time, 1000 = 1S
} 

void yellowBlink(){
    delay(500);
    digitalWrite(yellowLedPin,HIGH);
    delay(500);               //Set the delay time, 1000 = 1S
    digitalWrite(yellowLedPin,LOW);
}

