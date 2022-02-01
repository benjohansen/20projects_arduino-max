// this is to control fading two LEDs on the Sparkfun Digital Sandbox

int d05Val = 0;
int d06Val = 0;

const int d05Pin = 5;
const int d06Pin = 6;

void setup() {

Serial.begin(9600);

pinMode(d05Pin, OUTPUT);
pinMode(d06Pin, OUTPUT);

}

void loop() {
  
  while (Serial.available() > 0) {

  d05Val = Serial.parseInt();
  d06Val = Serial.parseInt();

  if (Serial.read() == '\n') { //dec value 10 in Max

  analogWrite(d05Pin, d05Val); //note the word "analog" now
  analogWrite(d06Pin, d06Val);
      }
  }
}
