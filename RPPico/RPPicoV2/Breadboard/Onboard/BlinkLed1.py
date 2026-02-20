# Blink Led1
from machine import Pin
from time import sleep
# Onboard Led1
Led1 = Pin(6, Pin.OUT)
Led1.low()
while True:
   Led1.toggle()
   sleep(.5)
