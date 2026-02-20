# Testing onboard componets
from machine import Pin
from time import sleep
# Led1-Led4 onboard LEDs
Led1 = Pin(6, Pin.OUT)
Led2 = Pin(7, Pin.OUT)
Led3 = Pin(8, Pin.OUT)
Led4 = Pin(9, Pin.OUT)
# K1-K2 keyboard buttons
K1 = Pin(10, Pin.IN)
K2 = Pin(11, Pin.IN)
K3 = Pin(12, Pin.IN)
K4 = Pin(13, Pin.IN)
# buz is a onboard buzzer
buz = Pin(14, Pin.OUT)  
buz.low()
Led1.low()
Led2.low()
Led3.low()
Led4.low()

while True:
    b1 = K1.value()
    b2 = K2.value()
    b3 = K3.value()
    b4 = K4.value()
    
    if b1 == 0:
        Led1.toggle()
        buz.high()
    if b2 == 0:
        Led2.toggle()
        buz.high()
    if b3 == 0:
        Led3.toggle()
        buz.high()
    if b4 == 0:
        Led4.toggle()
        buz.high()
    sleep(.001)
    buz.low()
    
    
    