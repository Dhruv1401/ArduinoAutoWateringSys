# Arduino Automatic Watering System

A simple Arduino project for an automatic watering system. This project uses a soil moisture sensor to detect dry soil and automatically waters the plants using a water pump controlled by a relay.

## Table of Contents

- [Features](#features)
- [Components Needed](#components-needed)
- [Circuit Diagram](#circuit-diagram)
- [Usage](#usage)
- [License](#license)

## Features

- Automatic watering of plants based on soil moisture levels.
- Real-time display of soil moisture on a 16x2 LCD with I2C interface.
- Adjustable threshold for soil moisture triggering watering.

## Components Needed

1. Arduino Nano
2. Soil Moisture Sensor
3. 16x2 LCD with I2C Interface
4. Water Pump or Motor
5. Relay Module
6. Tubing for Watering
7. Water Container
8. Power Supply

## Circuit Diagram

    +---------------------+<br>
  |      Arduino Nano   |<br>
  +---------------------+<br>
            |<br>
            |<br>
  +----Analog Pin ------- Soil Moisture Sensor<br>
  |         |<br>
  |         |<br>
  +----SDA -------------- LCD (I2C)<br>
  |         |<br>
  |         |<br>
  +----SCL -------------- LCD (I2C)<br>
  |         |<br>
  |         |<br>
  +----Digital Pin ------ Relay Module<br>
  |         |<br>
  |         |<br>
  +----Water Pump ------- Relay Module<br>
                      |<br>
                      |<br>
                  Power Supply -------------- Water Pump<br>
In simpler language: <br>
Connect the soil moisture sensor to one of the analog pins on the Arduino Nano.<br>
Connect the LCD with I2C interface to the corresponding pins (SDA and SCL).<br>
Connect the relay module to a digital pin on the Arduino Nano. This will control the water pump.<br>
Connect the water pump to the relay module.<br>


## Usage

1. Connect the components according to the circuit diagram.
2. Upload the `main.ino` sketch to your Arduino Nano using the Arduino IDE.
3. Adjust the soil moisture threshold in the sketch based on your sensor readings.
4. Power up the Arduino Nano, and the LCD will display real-time soil moisture.
5. The system will automatically water the plants if the soil is dry.

## License

This project is licensed under the [MIT License](extras/LICENSE.txt).
