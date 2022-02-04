This is a work in progress (beginning Feb.2022).

# Purpose

To provide clear examples of how to communicate between Max and an Arduino (microcontroller).

These examples use Max (by [Cycling'74](https://cycling74.com)) and the Digital Sandbox (by [Sparkfun](https://www.sparkfun.com/products/12651)). The Digital Sandbox is an [Arduino](https://www.arduino.cc) with real-world inputs and outputs attached.

There are a few parts to this collection:

Patches/Sketches created to match the [Sparkfun tutorials written by jimblom](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion):
- 01_Exploring-Blink
- 02_Multi-Blink
- 04_Dimming_one-LED
- 04_Dimming_two-LEDs
- 05_Color-Mixing
- 10_Do-the-Analog-Slide

Patches/Sketches created to better understand serial communication between the Arduino and Max:

- Digital Sandbox (DS) to Max
  - 1digital_from-Arduino-to-Max
    - send the state of a button from the Digital Sandbox to Max
  - 1analog_from-Arduino-to-Max
    - see "10_Do-the-Analog-Slide"
  - 1digital-and-1analog_from-Arduino-to-Max
    - send the states of a button and a potentiometer from the Digital Sandbox to Max

- Max to Arduino
  - 1digital_from-Max-to-Arduino
    - see "01_Exploring-Blink"
  - 5digital_from-Max-to-Arduino
    - see "02_Multi-Blink"
  - 1analog_from-Max-to-Arduino
    - see "04_Dimming_one-LED"
  - 2analog_from-Max-to-Arduino
    - see "04_Dimming_two-LEDs"
  - 3analog_from-Max-to-Arduino
    - see "05_Color-Mixing"

- Both Directions: Max to Arduino and Arduino to Max
  - 1analog-from-Arduiono-to-Max_3analog-from-Max-to-Arduino
    - send the state of the potentiometer from the Digital Sandbox to Max, and control the Digital Sandbox's RGB LED from Max


# About the Sparkfun Digital Sandbox

![photo of the Sparkfun Digital Sandbox](/media/Digital_Sandbox.jpeg)

### Microcontroller chip
- [ATMEGA328P](https://www.microchip.com/en-us/product/ATmega328P) (32kB of flash program memory and 2kB of internal SRAM) - the Sparkfun Digital Sandbox has an 8MHz clock speed

### Built-in inputs
- temperature sensor on A0 pin
- light sensor on A1 pin
- microphone on A2 pin
- slide potentiometer on A3 pin
- slide switch on D2 pin
- push button on D12 pins

### Built-in outputs
- LED bar graph on D4-D8 pins
- RGB LED on D9 (red), D10 (green), and D11 (blue) pins
- 3-pin add-on header with VCC (5V), GND, and pin D3
- 4-pin header with 3.3V, GND, A4 (SDA) pin, and A5 (SDL) pin

# other great resources
- [Sparkfun Digital Sandbox interactive simulation by Bitsbox](http://sparkfun.codepops.com/)
- [Luke Woodbury's Speaking to Arduino from Max MSP](https://www.dotlib.org/arduino-workshop-9)
- [Lady Ada's Arduino Tutorial about serial communication](http://www.ladyada.net/learn/arduino/lesson4.html)
- [Using The Screen Utility To View Arduino Serial Output](https://www.woolseyworkshop.com/2020/08/07/quick-tip-using-the-screen-utility-to-view-arduino-serial-output/)
- [Proof from Arduino source code that you can use 1 or HIGH and 0 or LOW](https://github.com/arduino/ArduinoCore-avr/blob/master/cores/arduino/Arduino.h#L40-L41)
- [How ot ignore ,DS-store files in Github](https://code.likeagirl.io/how-to-get-rid-of-ds-store-and-node-modules-in-git-repositories-d37b8a391247)
- [Using Serial.read() with Ardiuno](https://www.programmingelectronics.com/serial-read/)
