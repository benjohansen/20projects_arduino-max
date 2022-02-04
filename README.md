This is a work in progress (beginning Feb.2022).

# Purpose

Provide clear examples of how to communicate between Max and an Arduino (microcontroller) using the serial port.

These examples use Max (by [Cycling'74](https://cycling74.com)) and the [Arduino](https://www.arduino.cc) based Digital Sandbox (by [Sparkfun](https://www.sparkfun.com/products/12651)) that has real-world inputs and outputs built into one board.

Patches/Sketches created to match the [Sparkfun tutorials written by jimblom](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion) are named the same as Sparkfun's tutorials. Links are provided to my adaptation and to Sparkfun's tutorials.

- Digital Sandbox (DS) to Max
  - 1digital_from-Arduino-to-Max
    - send the state of a button from the Digital Sandbox to Max
  - 1analog_from-Arduino-to-Max
    - see "[10_Do-the-Analog-Slide](/10_Do-the-Analog-Slide)" ([Sparkfun's tutorial](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/10-do-the-analog-slide))
  - 1digital-and-1analog_from-Arduino-to-Max
    - send the states of a button and a potentiometer from the Digital Sandbox to Max

- Max to Arduino
  - 1digital_from-Max-to-Arduino
    - see "[01_Exploring-Blink](/01_Exploring-Blink)" ([Sparkfun's tutorial](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/1-exploring-blink))
  - 5digital_from-Max-to-Arduino
    - see "[02_Multi-Blink](/02_Multi-Blink)" ([Sparkfun's tutorial](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/2-multi-blink))
  - 1analog_from-Max-to-Arduino
    - see "[04_Dimming_one-LED](/04_Dimming_one-LED)" ([Sparkfun's tutorial](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/4-dimming-the-easy-way))
  - 2analog_from-Max-to-Arduino
    - see "[04_Dimming_two-LEDs](04_Dimming_two-LEDs)" ([Sparkfun's tutorial](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/4-dimming-the-easy-way))
  - 3analog_from-Max-to-Arduino
    - see "05_Color-Mixing" ([Sparkfun's tutorial](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/5-color-mixing))

- Both Directions: Max to Arduino and Arduino to Max
  - 1analog-from-Arduiono-to-Max_3analog-from-Max-to-Arduino
    - send the state of the potentiometer from the Digital Sandbox to Max, and control the Digital Sandbox's RGB LED from Max


# About the Sparkfun Digital Sandbox

[Link to the Sparkfun Digital Sandbox product page](https://www.sparkfun.com/products/12651)

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
