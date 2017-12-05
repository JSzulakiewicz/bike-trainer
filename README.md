
== Table of contents ==

1. Description
2. Hardware
	2.1. Bike
	2.2. Electronics
	2.3. Pinout
		2.3.1. Sensor
		2.3.2. Display
3. Firmware 
4. Software
5. Author

== 1. Description ==

TODO: Write description

== 2. Hardware ==

-- 2.1. Bike -- 
System assumes, that every revolution of bike's flywheel generates short-circuit of two wires.

It should work with any stationary training bike, equipped with sensor based on contactron (every bike I've ever seen).

If there is no sensor, one can use any sensor from cheap bike computer and magnet.

-- 2.2. Electronics -- 
The system was designed and tested on "Funduino Uno" board, but it should work on any version of Arduino, or it's clone. 
On some versions pinouts change could be necessary.

With siplest setup only Arduino board and wires are required, no other parts or modules are necessary. 

Optionally, it can use LCD display based on HD44780 equipped with IIC converter LM1602 (but it should work without display).

The device is powered via USB port.

-- 2.2. Pinout -- 

2.3.1. Sensor
Bike's sensor should be connected to pins 2 and GND.

2.3.2 Display

LCM1602	Arduino Uno
 VCC	5 V
 GND	GND
 SDA	A4
 SCL	A5



== 3. Firmware == 

Source file is located in Firmware directory.
You will also need additional LCD library, which you can download from:
https://bitbucket.org/fmalpartida/new-liquidcrystal/downloads/
Downloaded archieve should be extracted into: 
C:\Users\<USERNAME>\Documents\Arduino\libraries

== 4. Software ==

There is no PC software. Yet.

== 5. Author ==

My name is Jakub Szułakiewicz, and I'm the author of this system.


