# Baseball Scoreboard with Pushbutton Panel and Bluetooth Mobile Application
Final Project for ECE4180 at Georgia Institute of Technology, Spring 2019.  
Team members:  Matthew Aspinwall, Tony Lindeman, Alan Kittel, Lucas Nativio

This project is an Arduino Mega controlled baseball scoreboard.  A large LED panel is used to display the scoreboard, a pushbutton panel for editing the score, changing the inning, and resets, and a Bluetooth module for replicating the pushbutton functionality on an Android phone.

## Components

* [Arduino Mega](https://store.arduino.cc/usa/mega-2560-r3)
* [BLE Module](https://www.adafruit.com/product/2479)
* [LED Panel](https://www.sparkfun.com/products/14718)
* [Voltage Regulator Board](https://www.amazon.com/Digital-Converter-Adjustable-Regulator-Transformer/dp/B07MDZQ9QP)
* [DC Barrel Power Jack](https://www.sparkfun.com/products/119)
* [AMP Breakout Board](https://www.sparkfun.com/products/11044)
* [Speaker](https://www.sparkfun.com/products/11089)
* [Temperature Probe](https://www.sparkfun.com/products/11050)
* [Outdoor Project Box](https://www.amazon.com/Estone-Waterproof-Plastic-Electronic-Enclosure/dp/B00JEWNKR0)
* [Pushbuttons x6](https://www.amazon.com/Momentary-Waterproof-Stainless-Terminal-API-ELE/dp/B079HR5Q4R/ref=sr_1_23?keywords=push+button&qid=1555904659&s=industrial&sr=1-23)
* [Ethernet Cable](https://www.sparkfun.com/products/8915)
* [16 pin Ribbon Cable](https://www.amazon.com/Uxcell-Ribbon-Cable-Length-Pieces/dp/B01BNKVGAI)
* [Perma-Proto Board](https://www.adafruit.com/product/1148)
* [Jumper Wires](https://www.adafruit.com/product/758)
* [1k Ohm Resistor](https://www.sparkfun.com/products/14492)

Additionally, access to soldering materials, and a woodworking and pcb fabrication lab are required.


## Prerequisites

The Arduino IDE is used for programming the Arduino Mega.  See the download page [here](https://www.arduino.cc/en/Main/Software) and select the installer for your operating system.  An external 5V power source fed into the barrel jack connector is needed to power the system.


## Setup
Full system pinout, complete with the Arduino Mega board, speaker & amplifier, BLE module, pushbuttons, temperature probe, voltage regulator, and power jack.
![Image](https://github.com/alankittel3/scoreboard/blob/master/pcb_pinout.png?raw=true)

Eagle CAD for the pcb and the pcb itself.
![Image](https://github.com/alankittel3/scoreboard/blob/master/pcb.png?raw=true)
![Image](https://github.com/alankittel3/scoreboard/blob/master/pcb_physical.PNG?raw=true)

Six holes were drilled into the outdoor project box to mount 6 pushbuttons.
![Image](https://github.com/alankittel3/scoreboard/blob/master/pushbutton_panel.PNG?raw=true)

A perma-proto board was used to solder the ground connections for the buttons together.  A split ethernet cable was hooked up to each of the six pushbuttons and the common ground.  This cable is then split again at the other end for connections on the pcb.
![Image](https://github.com/alankittel3/scoreboard/blob/master/pushbutton_panel_open.PNG?raw=true)

## Code Overview
Explain basic breakdown of code, which files do what.
Explain how to get started with programming in the Arduino IDE.

## Usage
Demo video showing the usage of the pushbutton panel and phone application.
-embed video-

The top middle button on the pushbutton panel pauses the timer and the bottom middle pushbutton resets the game.  The game can only be reset when it is paused.

The functionality of the pushbutton panel is replicated via phone commands over a BLE connection.  See the repo [here](https://www.sparkfun.com/products/14492) for a slightly different version of the Android application used in this project.
