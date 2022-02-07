// global "const" variables = the value of these variables will not change (they are "read only")
const int redPin = 9;        // pins for the RGB LED
const int greenPin = 10;
const int bluePin = 11;

// when calling analogRead(), it reconfigures the Analog Pin for “input"
//    so, no need to run pinMod()
//    so, no need to create a const variable for the analog pin used

// global variables = datatypes that store values which are likely to change as the program runs
int redVal = 0;
int greenVal = 0;
int blueVal = 0;


void setup() {
  
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps

  pinMode(redPin, OUTPUT);   //set the pins as PWM output to fade LEDs
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

}

void loop() {
  if (Serial.available() > 0) {
  
  //parse (split) the incoming list of 3 values and store them in specific variables
  redVal = Serial.parseInt();
  greenVal = Serial.parseInt();
  blueVal = Serial.parseInt();
  
  //send the specified amount of voltage to the LED pins
  analogWrite(redPin, redVal);
  analogWrite(greenPin, greenVal);
  analogWrite(bluePin, blueVal);    

  // declare a local variable (which can only be used within this function or block of code) 
  // and read the state of the the Sparkfun Digital Sandbox slide potentiometer on analog pin 3
  // change A3 to whatever analog pin you want to read on the Digital Sandbox (such as A1 for the light sensor)
  int sensorValue = analogRead(A3);  // it will scale the voltage read as value between 0-1023
  
  Serial.println(sensorValue); // "print" (or send) to Max an ASCII code for the sensorValue plus ASCII value 13 and 10 for CR and LF
                               //  note: println is necessary because you are sending more than one byte at a time to create the value between 0-1023
                               //        the added CR and LF indicate when the group of ASCII characters is complete
                               //        Carriage Return is also known as: CR, ASCII 13, and \n
                               //        Line Feed is also known as: LF, ASCII 10, and \r
  
  delay(1);  // delay in between reads for stability (may not be necessary)
  
  }
}
