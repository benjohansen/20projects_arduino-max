
const int buttonPin = 16;     // the number of the pushbutton pin
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

    Serial.print(bstate);
    Serial.print(F(" "));

    Serial.println();
}
