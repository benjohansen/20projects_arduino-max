const int ledPin = 5; // pin capable of producing PWM

void setup() {

Serial.begin(9600);

pinMode(ledPin, OUTPUT);

}

void loop() {
  
  while (Serial.available() > 0) {
    int ledVal = Serial.read();  // value sent from Max (0-255)

    analogWrite(ledPin, ledVal); // writes an analog value (PWM wave) to a pin

      }
  }
