// this basically allows you, in Max, to send a toggle button to the serial object

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
      maxData = Serial.read();        // ... read the data
    
    if(maxData == 1)digitalWrite(ledPin, HIGH);   // turn led on if Max sent a 1
    if(maxData == 0)digitalWrite(ledPin, LOW);    // turn led off if Max sent a 0
    }
  }
