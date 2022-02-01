//variables to store RGB values
int sensorValue = 0;  //value read from the analog in pin
int redVal = 0;
int greenVal = 0;
int blueVal = 0;

//constants (i.e. they won't change) to store LED RGB pins
const int analogInPin = A3;  // Analog input pin that the potentiometer is attached to
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;



void setup() {
//start serial to listen for Max data
Serial.begin(9600);

//set the pins as PWM output to fade LEDs
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);

}

void loop() {
  if (Serial.available() > 0) {
  
  
  
  //parse (split) the incoming list of 3 values
  //and store them in the variables
  redVal = Serial.parseInt();
  greenVal = Serial.parseInt();
  blueVal = Serial.parseInt();
  
  //write out the values to the LED pins
  analogWrite(redPin, redVal);
  analogWrite(greenPin, greenVal);
  analogWrite(bluePin, blueVal);    

    

  sensorValue = analogRead(analogInPin);  // read the analog in value
  Serial.println(sensorValue); // print the results to the serial monitor
  //delay(10); // wait 10 ms before the next loop for the ADC to settle after the last reading
  }
}
