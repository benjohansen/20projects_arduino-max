
const int buttonPin = 12;     // the number of the pushbutton pin on the Sparkfun Digital Sandbox
int buttonState = 0;         // variable for reading the pushbutton status


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

    int bstate = 0;

    // read the state of the pushbutton value:
    buttonState = digitalRead(buttonPin);
    
    // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
     if (buttonState == HIGH) {
       bstate = 1;
      } else {
       bstate = 0;
      }

    Serial.print(bstate); //this will send an ASCII code to Max, so it will send 48 for 0 and 49 for 1

}
