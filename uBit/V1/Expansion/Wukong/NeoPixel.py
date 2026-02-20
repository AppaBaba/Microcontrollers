from microbit import *
import neopixel
from random import randint

# Neopixel strip on pin16 with a length of 4 pixels
np = neopixel.NeoPixel(pin16, 4)

while True:
    #Iterate over Neopixel strip
    for pnum in range(0, len(np)):
        red = randint(0, 50)
        green = randint(0, 50)
        blue = randint(0, 50)
        # Assign random colors to Neopixel
        np[pnum] = (red, green, blue)
        # Display Neopixel
        np.show()
        sleep(100)
