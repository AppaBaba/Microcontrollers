# Flash Led1 and Led2
from machine import Pin
from time import sleep
# Onboard Led1 and Led2
Led1 = Pin(6, Pin.OUT)
Led2 = Pin(7, Pin.OUT)
Led1.high()
Led2.low()
while True:
   Led1.toggle()
   print("LED1 Toggled")
   Led2.toggle()
   print("LED2 Toggled")
   sleep(.5)
