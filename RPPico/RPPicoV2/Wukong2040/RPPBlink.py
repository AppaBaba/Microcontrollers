from machine import Pin
from time import sleep
Led = Pin(7, Pin.OUT)
Led.low()
while True:
   Led.toggle()
   sleep(.5)
