This is a work in progress (beginning Feb.2022).

# Purpose

A pragmatic method for learning serial communication between Max (by [Cycling'74](https://cycling74.com)) and an [Arduino](https://www.arduino.cc) microcontroller by offering 20 projects with clear, thoroughly commented code.

These examples only use native Max objects and specifically use Sparkfun's Arduino based [Digital Sandbox](https://www.sparkfun.com/products/12651) that has real-world inputs and outputs built into one board ... but, with a little physical computing and a very small amount of code editing, any Arduino will work.

I was especially inspired by the Sparkfun's "[Digital Sandbox Arduino Companion](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion)" written by Jim Lindblom and Darwin Grosse's "[20 Objects](http://darwingrosse.com/20Objects/index.html)" course.

# Requirements

1. [install Max](https://cycling74.com/downloads)
2. [Install FTDI (USB) Drivers](https://www.ftdichip.com/Drivers/VCP.htm)
![photo of the FTDI driver page](/media/ftdi-driver-page.jpeg)
3. [Install the Arduino IDE](https://www.arduino.cc/en/Main/Software)
4. to upload sketches to the Digital Sandbox within the Arduino IDE: go to the "Tools" menu, select the **Arduino Pro or Pro Mini** as the board type and **ATmega328P (3.3V, 8 MHz)** as the processor type; also be sure to choose the correct USB serial port.

# Table of Contents

### Arduino to Max (reading Ardiuno input in Max)
  - [01_button](/01_button)
    - send the state of a button (digital pin) from the Digital Sandbox to Max
    - nearly the same as Arduino's "[Digital Read Serial](https://www.arduino.cc/en/Tutorial/BuiltInExamples/DigitalReadSerial)" built-in example (I use serial.print() rather than serial.println() and added some comments)
    - [Proof from Arduino source code that you can use 1 or HIGH and 0 or LOW](https://github.com/arduino/ArduinoCore-avr/blob/master/cores/arduino/Arduino.h#L40-L41)
  - [02_potentiometer](/02_potentiometer)
    - send the state of a potentiometer (analog pin) from the Digital Sandbox to Max
    - based on Sparkfun's "[10. Do the Analog Slide](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/10-do-the-analog-slide)" experiment
    - similar to Arduino's "[Analogy Read Serial](https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial)" built-in example
  - [03_button-and-potentiometer](/03_button-and-potentiometer)
    - send the states of a button (digital pin) and a potentiometer (analog pin) from the Digital Sandbox to Max
    - this example shows how to send data for more than one sensor from the Arduino to Max

### Max to Arduino (controlling Arduino output from Max)

  - [04_LED](/04_LED)
    - use Max to control one LED attached to the Digital Sandbox
    - based on Sparkfun's "[1. Exploring Blink](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/1-exploring-blink)" experiment
    - similar to Arduino's "[Blink](https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink)" built-in example
  - [05_5LEDs](/05_5LEDs)
    - use Max to control the Digital Sandbox's row of five LEDs
    - this example shows how to send more than one piece of data from Max to the Arduino
    - based on Sparkfun's "[2. Multi-Blink](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/2-multi-blink)" experiment
  - [06_dimLED](/06_dimLED)
    - use Max to control the dimming (using PWM) of an LED on the Digital Sandbox
    - based on Sparkfun's "[4. Dimming (the Easy Way)](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/4-dimming-the-easy-way)" experiment
    - similar to Arduino's [Fade](https://www.arduino.cc/en/Tutorial/BuiltInExamples/Fade) built-in example
    - will work for a motor (DS Addon) by changing output pin number to 3 (similar to and simpler than Sparkfun's "[15. Serial Motoring (Addon))](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/15-serial-motoring-addon)" experiment, with just one-way communication)
  - [07_dim2LEDs](/07_dim2LEDs)
    - use Max to control the dimming (using PWM) of two LEDs on the Digital Sandbox
    - based on Sparkfun's "[4. Dimming (the Easy Way)](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/4-dimming-the-easy-way)" experiment
  - [08_RGBLED](/08_RGBLED)
    - use Max to control the color (using PWM) of the RGB LED on the Digital Sandbox
    - based on Sparkfun's "[5. Color Mixing](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/5-color-mixing)" experiment
    - similar to Arduino's "[Read ASCII String](https://docs.arduino.cc/built-in-examples/communication/ReadASCIIString)" built-in example
  - [09_servo](/09_servo)
    - use Max to control a servo motor hooked to the Digital Sandbox (using pulsed digital out - *not* PWM)
    - based on Sparkfun's "[16. Servo Sweeper (Addon)](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/16-servo-sweeper-addon)" experiment
    - make sure the "charge" switch on the Digital SandBox is in the "off" position
  - [10_piezo](/10_piezo)
    - use Max to control the frequency output of a buzzer hooked to the Digital Sandbox (using PWM)
    - based on Sparkfun's "[14. Opto-Theremin (Addon)](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/14-opto-theremin-addon)" experiment



### Both Directions

  - [11_button-and-motor](/11_button-and-motor)
    - coming soon ...
    - PWM out
    - based on Sparkfun's "[15. Serial Motoring (Addon)](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/15-serial-motoring-addon)" experiment  
  - [12_potentiometer-and-RGBLED](/12_potentiometer-and-RGBLED)
    - send the state of the potentiometer from the Digital Sandbox to Max, and simultaneously control (from Max) the Digital Sandbox's RGB LED using PWM

**Projects 13-20 coming soon ...**

<hr>

# About the Sparkfun Digital Sandbox

[Sparkfun Digital Sandbox product page](https://www.sparkfun.com/products/12651)

[Sparkfun Digital Sandbox interactive simulation by Bitsbox](http://sparkfun.codepops.com/)

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

![photo of the Sparkfun Digital Sandbox](/media/Digital_Sandbox.jpeg)

<hr>

### Wireless communication using XBee modules

  - In short: I have concluded it isn't worth implementing wireless communication using XBees with the Sparkfun Digital SandBox
  - I used multiple software serial libraries with various combinations of pins 11, 12, 13, and A4 (14) and A5 (15). I got it to work ... but communication often created an incorrect/unstable output and input.
  - I want these fundamental examples to be very stable, so I will be suggesting hardware serial communication for students starting out ... unfortunately, the Digital Sandbox only has one hardware serial port.
