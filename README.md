This is a work in progress (beginning Feb.2022).

# Purpose

Provide clear, heavily example sketches/patches of how to communicate between Max and an Arduino (microcontroller) using the serial port.

These examples use Max (by [Cycling'74](https://cycling74.com)) and the [Arduino](https://www.arduino.cc) based Digital Sandbox (by [Sparkfun](https://www.sparkfun.com/products/12651)) that has real-world inputs and outputs built into one board.

Patches/Sketches created to match the [Sparkfun tutorials written by jimblom](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion) are named the same as Sparkfun's tutorials. Links are provided to my adaptation and to Sparkfun's tutorials.

### Digital Sandbox (DS) to Max
  - [1D_from-DS-to-Max](/1D_from-DS-to-Max)
    - send the state of a button (digital pin) from the Digital Sandbox to Max
    - nearly the same as [Arduino's Digital Read Serial](https://www.arduino.cc/en/Tutorial/BuiltInExamples/DigitalReadSerial) built-in example (I use serial.print() rather than serial.println() and added some comments)
  - 1A_from-DS-to-Max: see "[10_Do-the-Analog-Slide](/10_Do-the-Analog-Slide)" (and here's [Sparkfun's tutorial](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/10-do-the-analog-slide))
    - send the state of a potentiometer (analog pin) from the Digital Sandbox to Max
    - similar to [Arduino's Analogy Read Serial](https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial)
  - 1D-and-1A_from-DS-to-Max
    - send the states of a button (digital pin) and a potentiometer (analog pin) from the Digital Sandbox to Max

### Max to Digital Sandbox (DS)
  - 1D_from-Max-to-DS: see "[01_Exploring-Blink](/01_Exploring-Blink)" (and here's [Sparkfun's tutorial](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/1-exploring-blink))
  - 5D_from-Max-to-DS: see "[02_Multi-Blink](/02_Multi-Blink)" (and here's [Sparkfun's tutorial](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/2-multi-blink))
  - 1A_from-Max-to-DS: see "[04_Dimming_one-LED](/04_Dimming_one-LED)" (and here's [Sparkfun's tutorial](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/4-dimming-the-easy-way))
  - 2A_from-Max-to-DS: see "[04_Dimming_two-LEDs](04_Dimming_two-LEDs)" (and here's [Sparkfun's tutorial](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/4-dimming-the-easy-way))
  - 3A_from-Max-to-DS: see "05_Color-Mixing" (and here's [Sparkfun's tutorial](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/5-color-mixing))

### Sending both directions: Max to DS and simultaneously DS to Max
  - 1A-from-DS-to-Max_and_3A-from-Max-to-DS
    - send the state of the potentiometer from the Digital Sandbox to Max, and simultaneously control the Digital Sandbox's RGB LED from Max


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
