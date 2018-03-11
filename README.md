# Live Internet-of-Things Parking Map
Parking spots Internet of Things Build GT hackathon project

This project interfaces with the Electron Particle IOT microcontroller to read sensor data collected from parking spots in a lot.
The data can be used to broadcast a map of available spots to decrease drivers' wait times.

## Protoype
The prototype consists of 6 "parking spots" each equipped with a Hall-Effect sensor. (In practical applications, these sensors may be
replaced with camera sensors, and arrays of spots may be arranged into a matrix and the controller operated much like it would a keyboard
scanner.) When a "car" passes the Hall Effect sensor, the sensor output will be pulled low, and this will be read and transmitted to the
Internet by the Electron Particle IOT board.
