# Blink Red LED
from machine import Pin
from time import sleep
# Onboard Led1
RedLed = Pin(18, Pin.OUT)
RedLed.low()
while True:
   RedLed.toggle()
   sleep(.5)
