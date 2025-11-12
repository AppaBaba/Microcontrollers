from machine import Pin
from neopixel import NeoPixel
from time import sleep_ms
npPin = 4
NumOfLeds = 128
maxCol = 16
pin = Pin(npPin, Pin.OUT)
matrix = NeoPixel(pin, NumOfLeds)
# Converts one demintion NeoPixel to two demintion matrix
#
def matrixPixel(col, row, color):
    matrix[row * maxCol + col] = color
    matrix.write()

red = (100, 0, 0)
green = (0, 100, 0)
blue = (0, 0, 100)
clear = (0, 0, 0)
while(1):
    matrixPixel(7, 3, red)
    sleep_ms(500)
    matrixPixel(7, 3, clear)
    sleep_ms(500)
    matrixPixel(8, 3, green)
    sleep_ms(500)
    matrixPixel(8, 3, clear)
    sleep_ms(500)
    matrixPixel(9, 3, blue)
    sleep_ms(500)
    matrixPixel(9, 3, clear)
    sleep_ms(500)
