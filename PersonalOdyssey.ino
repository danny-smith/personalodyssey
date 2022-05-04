/*------------------------------------------------------------------------
Example sketch for Adafruit Thermal Printer library for Arduino.
Demonstrates a few text styles & layouts, bitmap printing, etc.

IMPORTANT: DECLARATIONS DIFFER FROM PRIOR VERSIONS OF THIS LIBRARY.
This is to support newer & more board types, especially ones that don't
support SoftwareSerial (e.g. Arduino Due). You can pass any Stream
(e.g. Serial1) to the printer constructor. See notes below.
------------------------------------------------------------------------*/

#include "Adafruit_Thermal.h"
#include "SoftwareSerial.h"
#define TX_PIN 6 // Arduino transmit YELLOW WIRE labeled RX on printer
#define RX_PIN 5 // Arduino receive GREEN WIRE labeled TX on printer

SoftwareSerial mySerial(RX_PIN, TX_PIN); // Declare SoftwareSerial obj first
Adafruit_Thermal printer(&mySerial); // Pass addr to printer constructor
// Then see setup() function regarding serial & printer begin() calls.

// Here's the syntax for hardware serial (e.g. Arduino Due) --------------
// Un-comment the following line if using hardware serial:

//Adafruit_Thermal printer(&Serial1); // Or Serial2, Serial3, etc.

// -----------------------------------------------------------------------
const int btnPin = A0;
int btnVal = 0;
void setup() {
pinMode(btnPin,INPUT_PULLUP);

// This line is for compatibility with the Adafruit IotP project pack,
// which uses pin 7 as a spare grounding point. You only need this if
// wired up the same way (w/3-pin header into pins 5/6/7):
pinMode(7, OUTPUT); digitalWrite(7, LOW);

  mySerial.begin(9600);
  printer.begin(450);
  printer.setTimes(35000, 500);
}

void loop() {
  
  printer.doubleHeightOn();
  printer.justify('L');
  printer.boldOn();
  
long randNumber;
btnVal=analogRead(btnPin);
randNumber = random(60);

if(btnVal<200 && randNumber>0 && randNumber<10){ 
  printer.println("How to get back from Attica."); // ATTICA
  printer.feed(2);
  printer.println("MERGE ONTO I-90 E");
  printer.println("TAKE EXIT 41 FOR NY-414 S");
  printer.println("TURN L ON NY-318 E");
  printer.println("TURN L ON US-20 E");
  printer.println("TURN R ON HALF ACRE RD");
  printer.println("SLIGHT L ON SEVIOR RD");
  printer.println("TURN R ON BLUEFIELD RD");
  printer.println("TURN L ON SKILLETT RD");
  printer.println("TURN R ON NY-34-S");
  printer.println("TURN L ON N TRIPHAMMER RD");
  printer.println("TURN R ON GRAHAM RD W");
  printer.println("TURN L ON THE LOOP RD");
  printer.feed(3);
  
  printer.justify('R');
  printer.println(F("Personal Odyssey"));
  printer.println(F("Danny Smith + Rebecca Levitan"));
  printer.println(F("2022"));
  printer.feed(10);}

  
if(btnVal<200 && randNumber>10 && randNumber<20){ // UTICA
  printer.println("How to get back from Utica.");
  printer.feed(2);
  printer.println("MERGE ONTO I-90 W");
  printer.println("TAKE EXIT 34A FOR I-481 S");
  printer.println("TAKE THE EXIT FOR I-81 S");
  printer.println("TAKE EXIT 12 FOR NY-281 S");
  printer.println("TURN R ON LUKER RD");
  printer.println("TURN R ON MCLEAN RD");
  printer.println("CONTINUE ONTO SCHOOL ST");
  printer.println("TURN R ON PERUVILLE ST");
  printer.println("CONTINUE ONTO NY-34B N");
  printer.println("TURN L ON N TRIPHAMMER RD");
  printer.println("TURN R ON GRAHAM RD W");
  printer.println("TURN L ON THE LOOP RD");
  printer.feed(3);
 
  printer.justify('R');
  printer.println(F("Personal Odyssey"));
  printer.println(F("Danny Smith + Rebecca Levitan"));
  printer.println(F("2022"));
  printer.feed(15);}

 
if(btnVal<200 && randNumber>20 && randNumber<30){ // GREECE
  printer.println("How to get back from Greece.");
  printer.feed(2);
  printer.println("MERGE ONTO NY-390 S");
  printer.println("CONTINUE ONTO I-490 E");
  printer.println("MERGE ONTO I-90 E");
  printer.println("TAKE EXIT 41");
  printer.println("MERGE ONTO NY-414 S");
  printer.println("TURN L ON NY-318 E");
  printer.println("TURN L ON US-20 E");
  printer.println("TURN R ON HALF ACRE RD");
  printer.println("SLIGHT L ON SEVIOR RD");
  printer.println("TURN R ON BLUEFIELD RD");
  printer.println("TURN L ON SKILLETT RD");
  printer.println("TURN R ON NY-34-S");
  printer.println("TURN L ON N TRIPHAMMER RD");
  printer.println("TURN R ON GRAHAM RD W");
  printer.println("TURN L ON THE LOOP RD");
  printer.feed(3);
  
  printer.justify('R');
  printer.println(F("Personal Odyssey"));
  printer.println(F("Danny Smith + Rebecca Levitan"));
  printer.println(F("2022"));
  printer.feed(15);}

 if(btnVal<200 && randNumber>30 && randNumber<40){ // TROY  
  printer.println("How to get back from Troy.");
  printer.feed(2);
  printer.println("HEAD S ON 3RD ST");
  printer.println("TURN R ON CONGRESS ST");
  printer.println("TURN L ON RIVER ST");
  printer.println("CONTINUE ON NY-2 W");
  printer.println("TURN R ON 2ND AVE");
  printer.println("TURN R ON 23RD ST");
  printer.println("MERGE ONTO I-787 S");
  printer.println("TAKE EXIT 5 FOR I-90 W");
  printer.println("TAKE EXIT 25A FOR I-88 W");
  printer.println("TAKE THE EXIT FOR NY 206 W");
  printer.println("TURN R ON NY-79 W");
  printer.println("TURN R MICHIGAN HILL RD");
  printer.println("TURN L ON GRIGGS GULF RD");
  printer.println("TURN L ON NY-200 W");
  printer.println("TURN L ON NY 13 S");
  printer.println("TURN R ON TRIPHAMMER RD");
  printer.println("TURN R ON THE LOOP RD");
  printer.feed(3);
  
  printer.justify('R');
  printer.println(F("Personal Odyssey"));
  printer.println(F("Danny Smith + Rebecca Levitan"));
  printer.println(F("2022"));
  printer.feed(15);}

if(btnVal<200 && randNumber>40 && randNumber<50){ // ROME  
  printer.println("How to get back from Rome.");
  printer.feed(2);
  printer.println("HEAD SW ON S JAMES ST");
  printer.println("MERGE ONTO NY-365 W");
  printer.println("MERGE ONYO I-90 W");
  printer.println("TAKE EXIT 34A");
  printer.println("CONTINUE ON I-481 S");
  printer.println("TAKE THE EXIT FOR I-81 S");
  printer.println("TAKE EXIT 12 FOR NY-281 S");
  printer.println("TURN R ON LUKER RD");
  printer.println("TURN R ON MCLEAN RD");
  printer.println("CONTINUE ONTO SCHOOL ST");
  printer.println("TURN R ON PERUVILLE ST");
  printer.println("CONTINUE ONTO NY-34B N");
  printer.println("TURN L ON N TRIPHAMMER RD");
  printer.println("TURN R ON GRAHAM RD W");
  printer.println("TURN L ON THE LOOP RD");
  printer.feed(3);
  
  printer.justify('R');
  printer.println(F("Personal Odyssey"));
  printer.println(F("Danny Smith + Rebecca Levitan"));
  printer.println(F("2022"));
  printer.feed(15);}


if(btnVal<200 && randNumber>50 && randNumber<60){ // CORINTH  
  printer.println("How to get back from Corinth.");
  printer.feed(2);
  printer.println("TAKE US 9N S");
  printer.println("TURN R ON N GREENFIELD RD");
  printer.println("TURN R ON MIDDLE GROVE RD");
  printer.println("TURN R ON NY-29 W");
  printer.println("TURN L ON N COMRIE AVE");
  printer.println("TURN L ON S MELCHER ST");
  printer.println("TURN R ON E MAIN ST");
  printer.println("TURN L ON NY-30A S");
  printer.println("TURN L ON ST HWY 920P");
  printer.println("TURN R ONTO I-90 W");
  printer.println("TAKE EXIT 34A");
  printer.println("CONTINUE ON I-481 S");
  printer.println("TAKE THE EXIT FOR I-81 S");
  printer.println("TAKE EXIT 12 FOR NY-281 S");
  printer.println("TURN R ON LUKER RD");
  printer.println("TURN R ON MCLEAN RD");
  printer.println("CONTINUE ONTO SCHOOL ST");
  printer.println("TURN R ON PERUVILLE ST");
  printer.println("CONTINUE ONTO NY-34B N");
  printer.println("TURN L ON N TRIPHAMMER RD");
  printer.println("TURN R ON GRAHAM RD W");
  printer.println("TURN L ON THE LOOP RD");
  printer.feed(3);
  
  printer.justify('R');
  printer.println(F("Personal Odyssey"));
  printer.println(F("Danny Smith + Rebecca Levitan"));
  printer.println(F("2022"));
  printer.feed(15);}

}
