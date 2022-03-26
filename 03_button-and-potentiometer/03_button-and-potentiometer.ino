// global "const" variables = the value of these variables will not change (they are "read only")
const int buttonPin = 12;  // the pin number of the pushbutton built into the Sparkfun Digital Sandbox

// when calling analogRead(), it reconfigures the Analog Pin for “input"
//    so, no need to run pinMod()
//    so, no need to create a const variable for the analog pin used


// code in this block runs only once (and runs once when you press reset)
void setup() {

  Serial.begin(9600);         // opens serial port, sets data rate to 9600 bps
  pinMode(buttonPin, INPUT);  // set pin 12 as an input pin

}


// code in this block runs repeatedly
void loop() {

    // declare a local variable (which can only be used within this function or block of code) 
    // and read the state of the the Sparkfun Digital Sandbox slide potentiometer on analog pin 3
    // change A3 to whatever analog pin you want to read on the Digital Sandbox (such as A1 for the light sensor)
    int sensorValue = analogRead(A3);  // it will scale the voltage read as value between 0-1023
    
    int buttonState = digitalRead(buttonPin); // declare the variable of buttonState ans set it to the read state of the pushbutton

    Serial.print(sensorValue); // print the state of the potentiometer (a number between 0-1023)
    Serial.print(F(" "));      // put a space between what you are sending so we can extract each from a list in Max; F() doesn't waste RAM on this string that will be the same all the time anyway
    Serial.print(buttonState); // print the state of the button (0 or 1)
    
    Serial.println();  // Prints data to the serial port as human-readable ASCII text followed by a carriage return character (ASCII 13, or '\r') and a newline character (ASCII 10, or '\n').
                       //        so, this just prints the CR and CF to indicate when the group of ASCII characters that printed with serial.print() is complete
                       //        Carriage Return is also known as: CR, ASCII 13, and \n
                       //        Line Feed is also known as: LF, ASCII 10, and \r

}
