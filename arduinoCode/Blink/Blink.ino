/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

#include <LiquidCrystal.h>

#define LED_BUILTIN PA9
#define LED_1 PA15
#define LED_2 PC10
#define LED_3 PC11
#define LED_4 PC12
#define RS PB12
#define EN PB13
#define D0 PB14
#define D4 PB15
#define D5 PC6
#define D6 PC7
#define D7 PC8

LiquidCrystal lcd(RS, EN, D4, D5, D6, D7); //Initialize the LCD
 
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  
  lcd.begin(16, 2);//Defining 16*2 LCD
  lcd.setCursor(0, 0); //LCD Row 0 and Column 0
  lcd.print("Hello! I'am"); //Print this Line
  lcd.setCursor(0, 1); //LCD Row 0 and Column 1
  lcd.print("EducationalBoard"); //Print this Line
  delay(4000);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_3, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(LED_1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(LED_2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(LED_3, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(LED_4, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  
}
