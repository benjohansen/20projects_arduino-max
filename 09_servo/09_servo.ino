#include <Servo.h>  // add the servo library to this sketch

Servo myservo;  // create servo object to control a servo

void setup() {

Serial.begin(9600);

myservo.attach(3);  // attaches the servo on pin 3 to the servo object

}

void loop() {
  
  while (Serial.available() > 0) {
    int val = Serial.read();  // value sent from Max (0-180)
    myservo.write(val);       // sets the servo position
    delay(15);                // waits for the servo to get there

      }
  } 
