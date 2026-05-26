# Clear all Leds
# on Pico BreakOut Board

from machine import Pin
from time import sleep

Nibble1 = [Pin(7, Pin.OUT), Pin(6, Pin.OUT), Pin(5, Pin.OUT), Pin(4, Pin.OUT)]
Nibble2 = [Pin(3, Pin.OUT), Pin(2, Pin.OUT), Pin(1, Pin.OUT), Pin(0, Pin.OUT)]
Nibble3 = [Pin(15, Pin.OUT), Pin(14, Pin.OUT), Pin(13, Pin.OUT), Pin(12, Pin.OUT)]
Nibble4 = [Pin(19, Pin.OUT), Pin(18, Pin.OUT), Pin(17, Pin.OUT), Pin(16, Pin.OUT)]
value = 1

while True:
    for i in range(4):
        Nibble1[i].value((value >> i) & 1)
    sleep(0.5)