/* 
This allows Max to control the LED on pin 13 by sending 0 or 1 to the Arduino 
by patching the output of a toggle button to the input of a serial object.
A [metro] object is included to recreate the constant blinking of the LED 
(the "hello world" of the Arduino).
*/

const int ledPin = 13;      // the pin that the LED is attached to
int maxData = 0;            // byte sent from Max

void setup()
  {
    Serial.begin(9600);        // opens serial port, sets data rate to 9600 bps
    pinMode(ledPin, OUTPUT);   // set pin 13 as an output pin
  }

void loop()
  {
    while(Serial.available() > 0) {   // as long as there is data in the serial buffer ...
      maxData = Serial.read();        // ... read the data and set the variable maxData to that byte
    
    if(maxData == 1)digitalWrite(ledPin, HIGH);   // turn led on if Max sent a 1
    if(maxData == 0)digitalWrite(ledPin, LOW);    // turn led off if Max sent a 0
    }
  }
