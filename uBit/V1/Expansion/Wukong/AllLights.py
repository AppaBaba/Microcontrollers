from microbit import *
import neopixel
from random import randint

np = neopixel.NeoPixel(pin16, 4)

while True:
    for pnum in range(0, len(np)):
        red = randint(0, 50)
        green = randint(0, 50)
        blue = randint(0, 50)
        # Assign random colors to Neopixel
        np[pnum] = (red, green, blue)
        # Display Neopixel
        np.show()
        sleep(50)

    display.show(Image.HEART)

    pin13.write_digital(1)
    sleep(100)
    pin13.write_digital(0)
    sleep(100)
    pin14.write_digital(1)
    sleep(100)
    pin14.write_digital(0)
    sleep(100)
    pin15.write_digital(1)
    sleep(100)
    pin15.write_digital(0)
    sleep(50)

    display.show(Image.HEART_SMALL)

