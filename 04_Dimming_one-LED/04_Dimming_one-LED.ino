// this is to control fading one LED on the Sparkfun Digital Sandbox

int d05Val = 0;       // value sent from Max (0-255)

const int d05Pin = 5; // pin capable of producing PWM

void setup() {

Serial.begin(9600);

pinMode(d05Pin, OUTPUT);

}

void loop() {
  
  while (Serial.available() > 0) {
    d05Val = Serial.read();

    analogWrite(d05Pin, d05Val); // writes an analog value (PWM wave) to a pin

      }
  }
