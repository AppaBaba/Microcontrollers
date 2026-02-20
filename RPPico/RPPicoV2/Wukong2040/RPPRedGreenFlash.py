from machine import Pin
from time import sleep

RedLed = Pin(6, Pin.OUT)
GreenLed = Pin(7, Pin.OUT)
RedLed.high()
GreenLed.low()
while True: 
   RedLed.toggle()
   print("Red LED Toggled")
   GreenLed.toggle()
   print("Green LED Toggled")
   sleep(.5)
