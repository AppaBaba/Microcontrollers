from machine import Pin
from time import sleep

RedLED = Pin(18, Pin.OUT)
GreenLED = Pin(19, Pin.OUT)
BlueLED = Pin(21, Pin.OUT)
t = 0.25

while True:
    RedLED.value(1)
    sleep(t)
    RedLED.value(0)
    sleep(t)
    GreenLED.value(1)
    sleep(t)
    GreenLED.value(0)
    sleep(t)
    BlueLED.value(1)
    sleep(t)
    BlueLED.value(0)
    sleep(t)
