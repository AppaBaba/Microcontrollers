# Flash red and green leds
from machine import Pin
from time import sleep
# Onboard Led1
RedLed = Pin(18, Pin.OUT)
RedLed.low()
GreenLed = Pin(19, Pin.OUT)
GreenLed.low()
while True:
   RedLed.toggle()
   sleep(.5)
   GreenLed.toggle()
   sleep(.5)