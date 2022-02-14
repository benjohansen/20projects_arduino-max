This is a work in progress (beginning Feb.2022).

# Purpose

Provide clear, thoroughly commented code to show how to use serial communication between Max (by [Cycling'74](https://cycling74.com)) and an [Arduino](https://www.arduino.cc) microcontroller.

These examples specifically use Sparkfun's Arduino based [Digital Sandbox](https://www.sparkfun.com/products/12651) that has real-world inputs and outputs built into one board ... but, with a little physical computing and a very small amount of code editing, any Arduino will work.

I was especially inspired by the Sparkfun's "[Digital Sandbox Arduino Companion](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion)" written by Jim Lindblom.

# Table of Contents

Naming convention:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;number = number of ins or outs<br/>
&nbsp;&nbsp;&nbsp;&nbsp;D = digital<br/>
&nbsp;&nbsp;&nbsp;&nbsp;A = analog<br/>
&nbsp;&nbsp;&nbsp;&nbsp;DS = Sparkfun's Digital Sandbox

### Digital Sandbox (DS) to Max
  - [1D-in-DS-to-Max](/1D-in-DS-to-Max)
    - send the state of a button (digital pin) from the Digital Sandbox to Max
    - nearly the same as Arduino's "[Digital Read Serial](https://www.arduino.cc/en/Tutorial/BuiltInExamples/DigitalReadSerial)" built-in example (I use serial.print() rather than serial.println() and added some comments)
  - [1A-in-DS-to-Max](/1A-in-DS-to-Max)
    - send the state of a potentiometer (analog pin) from the Digital Sandbox to Max
    - based on Sparkfun's "[10. Do the Analog Slide](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/10-do-the-analog-slide)" experiment
    - similar to Arduino's "[Analogy Read Serial](https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial)" built-in example
  - [1D-and-1A-in-DS-to-Max](/1D-and-1A-in-DS-to-Max)
    - send the states of a button (digital pin) and a potentiometer (analog pin) from the Digital Sandbox to Max

### Max to Digital Sandbox (DS)

  - [Max-to-DS-out-1D](/Max-to-DS-out-1D)
    - use Max to control one LED attached to the Digital Sandbox
    - based on Sparkfun's "[1. Exploring Blink](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/1-exploring-blink)" experiment
    - similar to Arduino's "[Blink](https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink)" built-in example
  - [Max-to-DS-out-5D](/Max-to-DS-out-5D)
    - use Max to control the Digital Sandbox's row of five LEDs
    - based on Sparkfun's "[2. Multi-Blink](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/2-multi-blink)" experiment
  - [Max-to-DS-out-1A](/Max-to-DS-out-1A)
    - use Max to control the dimming (using PWM) of an LED on the Digital Sandbox
    - based on Sparkfun's "[4. Dimming (the Easy Way)](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/4-dimming-the-easy-way)" experiment
    - similar to Arduino's [Fade](https://www.arduino.cc/en/Tutorial/BuiltInExamples/Fade) built-in example
    - will work for a motor (DS Addon) by changing output pin number to 3 (similar to and simpler than Sparkfun's "[15. Serial Motoring (Addon))](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/15-serial-motoring-addon)" experiment, with just one-way communication)
  - [Max-to-DS-out-2A](/Max-to-DS-out-2A)
    - use Max to control the dimming (using PWM) of two LEDs on the Digital Sandbox
    - based on Sparkfun's "[4. Dimming (the Easy Way)](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/4-dimming-the-easy-way)" experiment
  - [Max-to-DS-out-3A](/Max-to-DS-out-3A)
    - use Max to control the color (using PWM) of the RGB LED on the Digital Sandbox
    - based on Sparkfun's "[5. Color Mixing](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/5-color-mixing)" experiment
    - similar to Arduino's "[Read ASCII String](https://docs.arduino.cc/built-in-examples/communication/ReadASCIIString)" built-in example
  - [Max-to-DS-out-servo](/Max-to-DS-out-servo)
    - use Max to control a servo motor hooked to the Digital Sandbox (using pulsed digital out - *not* PWM)
    - based on Sparkfun's "[16. Servo Sweeper (Addon)](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/16-servo-sweeper-addon)" experiment
    - make sure the "charge" switch on the Digital SandBox is in the "off" position
  - [Max-to-DS-out-piezo](/Max-to-DS-out-piezo)
    - use Max to control the frequency output of a buzzer hooked to the Digital Sandbox (using PWM)
    - based on Sparkfun's "[14. Opto-Theremin (Addon)](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/14-opto-theremin-addon)" experiment



### Sending both directions: Max to DS and simultaneously DS to Max

  - 1D-in-DS-to-Max_Max-to-DS-out-1A
    - coming soon ...
    - PWM out
    - based on Sparkfun's "[15. Serial Motoring (Addon)](https://learn.sparkfun.com/tutorials/digital-sandbox-arduino-companion/15-serial-motoring-addon)" experiment  
  - [1A-in-DS-to-Max_Max-to-DS-out-3A](/1A-in-DS-to-Max_Max-to-DS-out-3A)
    - send the state of the potentiometer from the Digital Sandbox to Max, and simultaneously control (from Max) the Digital Sandbox's RGB LED using PWM

<hr>

# About the Sparkfun Digital Sandbox

[Link to the Sparkfun Digital Sandbox product page](https://www.sparkfun.com/products/12651)

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

# other great resources
- [Sparkfun Digital Sandbox interactive simulation by Bitsbox](http://sparkfun.codepops.com/)
- [Luke Woodbury's Speaking to Arduino from Max MSP](https://www.dotlib.org/arduino-workshop-9)
- [Lady Ada's Arduino Tutorial about serial communication](http://www.ladyada.net/learn/arduino/lesson4.html)
- [Using The Screen Utility To View Arduino Serial Output](https://www.woolseyworkshop.com/2020/08/07/quick-tip-using-the-screen-utility-to-view-arduino-serial-output/)
- [Proof from Arduino source code that you can use 1 or HIGH and 0 or LOW](https://github.com/arduino/ArduinoCore-avr/blob/master/cores/arduino/Arduino.h#L40-L41)
- [How ot ignore ,DS-store files in Github](https://code.likeagirl.io/how-to-get-rid-of-ds-store-and-node-modules-in-git-repositories-d37b8a391247)
- [Using Serial.read() with Ardiuno](https://www.programmingelectronics.com/serial-read/)
