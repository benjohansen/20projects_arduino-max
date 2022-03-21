
//the "const" variable qualifier means the value of these variables will not change (they are "read only")
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

void setup() {
//start serial to listen for Max data
Serial.begin(9600);

//set the pins as PWM output to fade LEDs
pinMode(redPin, OUTPUT);
pinMode(bluePin, OUTPUT);
pinMode(greenPin, OUTPUT);
}

void loop() {

  while (Serial.available() > 0) {

  int redVal = Serial.parseInt();
  int greenVal = Serial.parseInt();
  int blueVal = Serial.parseInt();
  
 //   if (Serial.read() == '\n') { //dec value 10 in Max
  
    analogWrite(redPin, redVal);
    analogWrite(greenPin, greenVal);
    analogWrite(bluePin, blueVal);
//    }

  }
}
