#include <Arduino.h>
#include <SoftwareSerial.h>

#DEFINE PORT 9600

const SoftwareSerial portRaspbery(1, 2);

const SoftwareSerial portModule1(3, 4);
const SoftwareSerial portModule2(4, 5);
const SoftwareSerial portModule3(6, 7);
const SoftwareSerial portModule4(8, 9);
const SoftwareSerial portModule5(10, 11);



/*
  Turns on an LED on for one second, then off for one second, repeatedly.
*/


void setup()
{
    /*
        Initialize serial port
    */
	Serial.begin(PORT);
    portRaspbery.begin(PORT);
    portModule1.begin(PORT);
    portModule2.begin(PORT);
    portModule3.begin(PORT);
    portModule4.begin(PORT);
    portModule5.begin(PORT);

}

void loop()
{

}
