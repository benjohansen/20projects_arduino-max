
const int analogInPin = A3;  // Analog input pin that the potentiometer is attached to
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

    sensorValue = analogRead(analogInPin);  // read the analog in value

    // read the state of the pushbutton value:
    buttonState = digitalRead(buttonPin);
    
    // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
     if (buttonState == HIGH) {
       bstate = 1;
      } else {
       bstate = 0;
      }


    Serial.print(sensorValue); // print the results to the serial monitor
    Serial.print(F(" "));
    Serial.print(bstate, 2);
    Serial.print(F(" "));

    Serial.println();

}
