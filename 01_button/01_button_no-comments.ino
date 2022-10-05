void setup() {
  Serial.begin(9600);
}
void loop() {
  int sensorValue = analogRead(A3);
  Serial.println(sensorValue);
  delay(1);
}
