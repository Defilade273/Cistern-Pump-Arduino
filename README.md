# Cistern-Pump-Arduino
running a pump to fill a cistern based off of the water level in the cistern

The setup is an arduino Uno connected to an Ultrasonic Sensor, to measure the water levels in the cistern.  It is also connected to a relay to turn on and off a pump.  It scans every second to compare the water level to a stored value.  If it is higher than the stored value, it activates the pump.  If it is equal or lower than the stored value, it stops the pump.

This is my first foray into home automation and arduinos, so mistakes are bound to be made.
