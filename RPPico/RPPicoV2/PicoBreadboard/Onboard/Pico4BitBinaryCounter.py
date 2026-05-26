# Pico 4 bit Binary Counter
# on Pico BreadBoard

from machine import Pin
from time import sleep


BoardLeds = [Pin(9, Pin.OUT), Pin(8, Pin.OUT), Pin(7, Pin.OUT), Pin(6, Pin.OUT)]
value = 0

while True:
    for i in range(4):
        BoardLeds[i].value((value >> i) & 1)
    value = (value + 1) % 16
    sleep(0.5)