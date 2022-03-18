This is a work in progress (beginning Feb.2022).

# Purpose

Provide clear, thoroughly commented code to show how to use serial communication between Max (by [Cycling'74](https://cycling74.com)) and an [Arduino](https://www.arduino.cc) microcontroller.

These examples specifically use Sparkfun's Arduino based [Digital Sandbox](https://www.sparkfun.com/products/12651) that has real-world inputs and outputs built into one board ... but, with a little physical computing and a very small amount of code editing, any Arduino will work.

I was especially inspired by the Sparkfun's "[Digital Sandbox Arduino Companion](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion)" written by Jim Lindblom.

# Requirements

1. [install Max](https://cycling74.com/downloads)
2. [Install FTDI (USB) Drivers](https://www.ftdichip.com/Drivers/VCP.htm)
![photo of the FTDI driver page](/media/ftdi-driver-page.jpeg)
3. [Install the Arduino IDE](https://www.arduino.cc/en/Main/Software)
4. to upload sketches to the Digital Sandbox within the Arduino IDE: go to the "Tools" menu, select the **Arduino Pro or Pro Mini** as the board type and **ATmega328P (3.3V, 8 MHz)** as the processor type; also be sure to choose the correct USB serial port.

# Table of Contents

### Arduino to Max
  - [Arduino-to-Max_button](/Arduino-to-Max_button)
    - send the state of a button (digital pin) from the Digital Sandbox to Max
    - nearly the same as Arduino's "[Digital Read Serial](https://www.arduino.cc/en/Tutorial/BuiltInExamples/DigitalReadSerial)" built-in example (I use serial.print() rather than serial.println() and added some comments)
    - [Proof from Arduino source code that you can use 1 or HIGH and 0 or LOW](https://github.com/arduino/ArduinoCore-avr/blob/master/cores/arduino/Arduino.h#L40-L41)
  - [Arduino-to-Max_pot](/Arduino-to-Max_pot)
    - send the state of a potentiometer (analog pin) from the Digital Sandbox to Max
    - based on Sparkfun's "[10. Do the Analog Slide](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/10-do-the-analog-slide)" experiment
    - similar to Arduino's "[Analogy Read Serial](https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial)" built-in example
  - [Arduino-to-Max_button-and-pot](/Arduino-to-Max_button-and-pot)
    - send the states of a button (digital pin) and a potentiometer (analog pin) from the Digital Sandbox to Max

### Max to Arduino

  - [Max-to-Arduino_LED](/Max-to-Arduino_LED)
    - use Max to control one LED attached to the Digital Sandbox
    - based on Sparkfun's "[1. Exploring Blink](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/1-exploring-blink)" experiment
    - similar to Arduino's "[Blink](https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink)" built-in example
  - [Max-to-Arduino_5LEDs](/Max-to-Arduino_5LEDs)
    - use Max to control the Digital Sandbox's row of five LEDs
    - based on Sparkfun's "[2. Multi-Blink](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/2-multi-blink)" experiment
  - [Max-to-Arduino_dimLED](/Max-to-Arduino_dimLED)
    - use Max to control the dimming (using PWM) of an LED on the Digital Sandbox
    - based on Sparkfun's "[4. Dimming (the Easy Way)](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/4-dimming-the-easy-way)" experiment
    - similar to Arduino's [Fade](https://www.arduino.cc/en/Tutorial/BuiltInExamples/Fade) built-in example
    - will work for a motor (DS Addon) by changing output pin number to 3 (similar to and simpler than Sparkfun's "[15. Serial Motoring (Addon))](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/15-serial-motoring-addon)" experiment, with just one-way communication)
  - [Max-to-Arduino_dim2LEDs](/Max-to-Arduino_dim2LEDs)
    - use Max to control the dimming (using PWM) of two LEDs on the Digital Sandbox
    - based on Sparkfun's "[4. Dimming (the Easy Way)](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/4-dimming-the-easy-way)" experiment
  - [Max-to-Arduino_RGBLED](/Max-to-Arduino_RGBLED)
    - use Max to control the color (using PWM) of the RGB LED on the Digital Sandbox
    - based on Sparkfun's "[5. Color Mixing](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/5-color-mixing)" experiment
    - similar to Arduino's "[Read ASCII String](https://docs.arduino.cc/built-in-examples/communication/ReadASCIIString)" built-in example
  - [Max-to-Arduino_servo](/Max-to-Arduino_servo)
    - use Max to control a servo motor hooked to the Digital Sandbox (using pulsed digital out - *not* PWM)
    - based on Sparkfun's "[16. Servo Sweeper (Addon)](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/16-servo-sweeper-addon)" experiment
    - make sure the "charge" switch on the Digital SandBox is in the "off" position
  - [Max-to-Arduino_piezo](/Max-to-Arduino_piezo)
    - use Max to control the frequency output of a buzzer hooked to the Digital Sandbox (using PWM)
    - based on Sparkfun's "[14. Opto-Theremin (Addon)](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/14-opto-theremin-addon)" experiment



### Sending both directions: Max to Arduino and simultaneously Arduino to Max

  - [sending-both-directions_button_motor](/sending-both-directions_button_motor)
    - coming soon ...
    - PWM out
    - based on Sparkfun's "[15. Serial Motoring (Addon)](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/15-serial-motoring-addon)" experiment  
  - [sending-both-directions_pot_RGBLED](/sending-both-directions_pot_RGBLED)
    - send the state of the potentiometer from the Digital Sandbox to Max, and simultaneously control (from Max) the Digital Sandbox's RGB LED using PWM

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
