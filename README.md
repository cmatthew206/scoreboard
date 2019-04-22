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
* [Ribbon Cables]
* [Perma-Proto Board](https://www.adafruit.com/product/1148)
* [Jumper Wires](https://www.adafruit.com/product/758)
* [4.7k Ohm Resistor](https://www.adafruit.com/product/2783)

Additionally, access to soldering materials, and a woodworking and pcb fabrication lab are required.


## Prerequisites

The Arduino IDE is used for programming the Arduino Mega.  See the download page [here](https://www.arduino.cc/en/Main/Software) and select the installer for your operating system.  An external 5V power source fed into the barrel jack connector is needed to power the system.


## Setup

Six holes were drilled into the outdoor project box to mount 6 pushbuttons.
![Image](https://github.com/alankittel3/scoreboard/blob/master/pushbutton_panel.PNG?raw=true)

A perma-proto board was used to solder the ground connections for the buttons together.  A split ethernet cable was hooked up to each of the six pushbuttons and the common ground.  This cable is then split again at the other end for connections on the pcb.
![Image](https://github.com/alankittel3/scoreboard/blob/master/pushbutton_panel_open.PNG?raw=true)

### Break down into end to end tests

Explain what these tests test and why

```
Give an example
```

### And coding style tests

Explain what these tests test and why

```
Give an example
```

## Deployment

Add additional notes about how to deploy this on a live system

## Built With

* [Dropwizard](http://www.dropwizard.io/1.0.2/docs/) - The web framework used
* [Maven](https://maven.apache.org/) - Dependency Management
* [ROME](https://rometools.github.io/rome/) - Used to generate RSS Feeds

## Contributing

Please read [CONTRIBUTING.md](https://gist.github.com/PurpleBooth/b24679402957c63ec426) for details on our code of conduct, and the process for submitting pull requests to us.

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/your/project/tags). 

## Authors

* **Billie Thompson** - *Initial work* - [PurpleBooth](https://github.com/PurpleBooth)

See also the list of [contributors](https://github.com/your/project/contributors) who participated in this project.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* Hat tip to anyone whose code was used
* Inspiration
* etc

