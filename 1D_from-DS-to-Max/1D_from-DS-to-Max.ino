
// global "const" variables = the value of these variables will not change (they are "read only")
const int buttonPin = 12;  // the pin number of the pushbutton built into the Sparkfun Digital Sandbox

// global variables = datatypes that store values which are likely to change as the program runs
// (there are none for this sketch)


// code in this block runs only once (and runs once when you press reset)
void setup() {

  Serial.begin(9600);        // opens serial port, sets data rate to 9600 bps
  pinMode(buttonPin, INPUT); // set pin 12 as an input pin

}

// code in this block runs repeatedly
void loop() {

    //declare a local variable (which can only be used within this function or block of code) and read the state of button
    int buttonState = digitalRead(buttonPin); // it will read LOW or HIGH

    Serial.print(buttonState); //this will "print" (or send) an ASCII code to Max
    // so it will send 48 for 0 and 49 for 1 (note: LOW and HIGH are constant variables in Arduino code that equal 0 and 1)

    delay(1);  // delay in between reads for stability (may not be necessary)

}
