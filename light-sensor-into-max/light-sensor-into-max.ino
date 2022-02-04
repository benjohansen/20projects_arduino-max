
const int analogInPin = A1;  // Analog input pin that the light sensor is hooked to
const int buttonPin = 12;     // the number of the pushbutton pin
int buttonState = 0;         // variable for reading the pushbutton status

//variables
int sensorValue = 0;  //value read from the analog in pin
int bstate = 0;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

    sensorValue = analogRead(analogInPin);  // read the analog in value of the potentiometer
    

    Serial.print(sensorValue); // print the results to the serial monitor
    //Serial.print(F(" "));      // put a space between what you are sending so we can extract each from a list in Max; F() doesn't waste RAM on this string that will be the same all the time anyway
    //Serial.println();  // Prints data to the serial port as human-readable ASCII text followed by a carriage return character (ASCII 13, or '\r') and a newline character (ASCII 10, or '\n').


}
