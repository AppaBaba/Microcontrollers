# Pico 4 bit Binary Counter
# on Pico BreakOut Board

from machine import Pin
from time import sleep

# Order of pins are chosen do to on how you what to look at board
# if flip up side down you would use pins 0, 1, 2, 3, 4, 5, 6, 7
# if you want to have highes bit on left side
BoardLeds = [Pin(7, Pin.OUT), Pin(6, Pin.OUT), Pin(5, Pin.OUT), Pin(4, Pin.OUT), Pin(3, Pin.OUT), Pin(2, Pin.OUT), Pin(1, Pin.OUT), Pin(0, Pin.OUT)]
value = 0

while True:
    for i in range(8):
        BoardLeds[i].value((value >> i) & 1)
    value = (value + 1) % 256
    sleep(0.5)