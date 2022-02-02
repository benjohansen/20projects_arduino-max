/*  This allows Max to control the 5 LEDs (pins 4-8) by sending a list of zeros and ones 
 *  to the Arduino via the serial object and using the Arduino's Serial.parseInt() function 
 *  to read each integer in the list one at a time to set 5 different variables.
 *  this is to control the 5 LEDs in a row on the Sparkfun Digital Sandbox
 */

const int d04Pin = 4; //output pins where the LEDs are connected
const int d05Pin = 5;
const int d06Pin = 6;
const int d07Pin = 7;
const int d08Pin = 8;

int d04Val = 0; //varialbe used to set value sent from Max for each LED
int d05Val = 0; 
int d06Val = 0;
int d07Val = 0;
int d08Val = 0;

void setup() {

Serial.begin(9600);  //opens serial port, sets data rate to 9600 bps

pinMode(d04Pin, OUTPUT); //set pin 4 as an output pin
pinMode(d05Pin, OUTPUT); //set pin 5 as an output pin
pinMode(d06Pin, OUTPUT); //set pin 6 as an output pin
pinMode(d07Pin, OUTPUT); //set pin 7 as an output pin
pinMode(d08Pin, OUTPUT); //set pin 8 as an output pin

}

void loop() {
  
  while (Serial.available() > 0) { // as long as there is data in the serial buffer ...

  d04Val = Serial.parseInt(); //looks for the next valid integer in the incoming serial, so this will be our first value in the list sent from Max
  d05Val = Serial.parseInt(); //looks for the next valid integer in the incoming serial
  d06Val = Serial.parseInt(); //looks for the next valid integer in the incoming serial
  d07Val = Serial.parseInt(); //looks for the next valid integer in the incoming serial
  d08Val = Serial.parseInt(); //looks for the next valid integer in the incoming serial

  if (Serial.read() == '\n') { //dec value 10 in Max, the last character in the list from Max

  digitalWrite(d04Pin, d04Val); //turn pin 4 on or off
  digitalWrite(d05Pin, d05Val); //turn pin 5 on or off
  digitalWrite(d06Pin, d06Val); //turn pin 6 on or off
  digitalWrite(d07Pin, d07Val); //turn pin 7 on or off
  digitalWrite(d08Pin, d08Val); //turn pin 8 on or off
  
      
      }
  }
}
