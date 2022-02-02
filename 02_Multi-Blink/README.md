# 02_Multi-Blink

This allows Max to control the 5 LEDs (pins 4-8) by sending a list of zeros and ones to the Arduino via the serial object and using the Arduino's Serial.parseInt() function to read each integer in the list one at a time to set 5 different variables.
