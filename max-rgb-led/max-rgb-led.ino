

//variables to store RGB values
int redVal = 0;
int greenVal = 0;
int blueVal = 0;

//constants (i.e. they won't change) to store LED RGB pins
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

  redVal = Serial.parseInt();
  greenVal = Serial.parseInt();
  blueVal = Serial.parseInt();
  
    if (Serial.read() == '\n') { //dec value 10 in Max
  
    analogWrite(redPin, redVal);
    analogWrite(greenPin, greenVal);
    analogWrite(bluePin, blueVal);
    }

  }
}
