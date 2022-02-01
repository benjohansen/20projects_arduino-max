//constants (they won't change)  They're used to give names to the pins used
const int analogInPin = A3;  // Analog input pin that the potentiometer is attached to

//variables
int sensorValue = 0;  //value read from the analog in pin



void setup() {
  Serial.begin(9600); // initialize serial communications at 9600 bps:
}



void loop() {
 
  sensorValue = analogRead(analogInPin);  // read the analog in value

  Serial.println(sensorValue); // print the results to the serial monitor
  
  delay(10); // wait 10 ms before the next loop for the ADC to settle after the last reading
}
