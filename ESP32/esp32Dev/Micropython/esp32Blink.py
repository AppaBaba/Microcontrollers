from machine import Pin
from time import sleep

led = Pin(18, Pin.OUT)
t = 0.5

while True:
    led.value(1)
    sleep(t)
    led.value(0)
    sleep(t)
