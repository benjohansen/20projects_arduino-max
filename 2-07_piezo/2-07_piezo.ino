const int piezoPin = 3; // pin capable of producing PWM

void setup() {

Serial.begin(9600);

pinMode(piezoPin, OUTPUT);

}

void loop() {
  
  if (Serial.available() > 0) {
    long freq = Serial.parseInt();

    if (Serial.read() == '\n') { //dec value 10 in Max

      freq = abs(freq);     // remove negative values
      tone(piezoPin, freq); // writes an analog value (PWM wave) to a pin
    }
    
    delay(5);
    
      }
  }
