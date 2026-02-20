from machine import Pin
from time import sleep
GreenLed = Pin(7, Pin.OUT)
BlueLed = Pin(6, Pin.OUT)
GreenLed.high()
BlueLed.low()
while True:
   GreenLed.toggle()
   print("Green LED Toggled")
   BlueLed.toggle()
   print("Blue LED Toggled")
   sleep(.5)
