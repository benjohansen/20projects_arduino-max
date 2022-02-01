// this is to control fading two LEDs on the Sparkfun Digital Sandbox

int d05Val = 0;

const int d05Pin = 5;

void setup() {

Serial.begin(9600);

pinMode(d05Pin, OUTPUT);

}

void loop() {
  
  while (Serial.available() > 0) {
    d05Val = Serial.read();

    analogWrite(d05Pin, d05Val); //note the word "analog" now

      }
  }
