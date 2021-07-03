from machine import Pin
from neopixel import NeoPixel
from time import sleep_ms
npPin = 4
NumOfLeds = 128
maxCol = 16
maxRow = 8
pin = Pin(npPin, Pin.OUT)
neoMatrix = NeoPixel(pin, NumOfLeds)
# Converts one demintion NeoPixel to two demintion matrix
#
def setNeoMatrix(col, row, color):
    neoMatrix[row * maxCol + col] = color
    neoMatrix.write()

def clearNeoMatrix(col, row):
    clear = (0, 0, 0)
    neoMatrix[row * maxCol + col] = clear
    neoMatrix.write()

red = (100, 0, 0)
green = (0, 100, 0)
blue = (0, 0, 100)
while(1):
    for row in range(maxRow):
        col = row
        setNeoMatrix(col + 3 , row, red)
        setNeoMatrix(col + 4, row, green)
        setNeoMatrix(col + 5, row, blue)
        sleep_ms(100)
        clearNeoMatrix(col + 3, row)
        clearNeoMatrix(col + 4, row)
        clearNeoMatrix(col + 5, row)
        sleep_ms(100)


