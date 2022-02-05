
//no need to create a const variable for the analog pin used and no need to use pinMode() because when calling analogRead(), it reconfigures the Analog Pin for “input"


void setup() {
  Serial.begin(9600); // initialize serial communications at 9600 bps
 
}

void loop() {

  //declare a local variable (which can only be used within this function or block of code) and read the state of the the Sparkfun Digital Sandbox slide potentiometer on analog pin 3
  int sensorValue = analogRead(A3);  // it will scale the voltage read as value between 0-1023

  Serial.println(sensorValue); // "print" (or send) to Max an ASCII code for the sensorValue plus ASCII value 13 and 10 for CR and LF
                               //  note: println is necessary because you are sending more than one byte at a time to create the value between 0-1023
                               //        the added CR and LF indicate when the group of ASCII characters is complete
                               //        Carriage Return is also known as: CR, ASCII 13, and \n
                               //        Line Feed is also known as: LF, ASCII 10, and \r
  
  delay(1);  // delay in between reads for stability (may not be necessary)
}
