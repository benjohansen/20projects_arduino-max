const int buttonPin = 12;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  Serial.print(buttonState);
  delay(1);
}
