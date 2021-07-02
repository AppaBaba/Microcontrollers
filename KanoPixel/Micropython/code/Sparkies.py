from machine import Pin
from neopixel import NeoPixel
from time import sleep_ms
from random import randint
gpio = 4
NumOfLeds = 128
pin = Pin(gpio, Pin.OUT)
np = NeoPixel(pin, NumOfLeds)
while (1):
    Led = randint(1, NumOfLeds)
    np[Led % NumOfLeds] = (randint(5, 105), randint(25, 125), randint(50, 150))
    np.write()
    sleep_ms(1)
