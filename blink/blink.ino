const int ledPin = 13;      // the pin that the LED is attached to
int maxData = 0;            // byte sent from max

void setup()
  {
    Serial.begin(9600);     // init the serial port
    pinMode(ledPin, OUTPUT);   // make pin 13 an output
  }

void loop()
  {
    while(Serial.available() > 0) {
      maxData = Serial.read();
    }
    if(maxData == 1)digitalWrite(ledPin, HIGH);   // turn led on
    if(maxData == 0)digitalWrite(ledPin, LOW);    // turn led off
  }
