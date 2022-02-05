
//the "const" variable qualifier means the value of these variables will not change (they are "read only")
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

//variables to store RGB values
int redVal = 0;
int greenVal = 0;
int blueVal = 0;




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
