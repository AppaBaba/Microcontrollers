# simulate old comuter with front panel
# using breakout board with 27 leds connected to output pins
from machine import Pin
import time

# Define output pins with leds
led0 = Pin(0, Pin.OUT); led8  = Pin(8,  Pin.OUT); led16 = Pin(16, Pin.OUT)
led1 = Pin(1, Pin.OUT); led9  = Pin(9,  Pin.OUT); led17 = Pin(17, Pin.OUT)
led2 = Pin(2, Pin.OUT); led10 = Pin(10, Pin.OUT); led18 = Pin(18, Pin.OUT)
led3 = Pin(3, Pin.OUT); led11 = Pin(11, Pin.OUT); led19 = Pin(19, Pin.OUT)
led4 = Pin(4, Pin.OUT); led12 = Pin(12, Pin.OUT); led20 = Pin(20, Pin.OUT)
led5 = Pin(5, Pin.OUT); led13 = Pin(13, Pin.OUT); led21 = Pin(21, Pin.OUT)
led6 = Pin(6, Pin.OUT); led14 = Pin(14, Pin.OUT); led22 = Pin(22, Pin.OUT)
led7 = Pin(7, Pin.OUT); led15 = Pin(15, Pin.OUT); led26 = Pin(26, Pin.OUT)

# Matrix RegA, RegB and RegC used for the three front pannel registers
RegA = (led0, led1, led2, led3, led4, led5, led6, led7)
RegB = (led8, led9, led10, led11, led12, led13, led14, led15)
RegC = (led16, led17, led18, led19, led20, led21, led22, led26)


# Matrix V1, V2 and V3 hold the data to be loaded in registers A, B, C

V1 = [[0, 0, 1, 0, 1, 1, 0, 0],
     [1, 0, 1, 0, 1, 1, 0, 1],
     [0, 0, 1, 0, 1, 1, 0, 0],
     [1, 0, 1, 0, 1, 1, 0, 1]]

V2 = [[1, 0, 1, 0, 1, 1, 0, 0],
     [1, 0, 1, 0, 1, 1, 0, 1],
     [0, 0, 1, 0, 1, 1, 0, 1],
     [0, 0, 1, 0, 1, 1, 0, 0]]

V3 = [[0, 0, 1, 0, 1, 1, 0, 0],
     [0, 0, 1, 0, 1, 1, 0, 0],
     [1, 0, 1, 0, 1, 1, 0, 1],
     [1, 1, 0, 0, 1, 1, 0, 1]]



while True:
    for r in range(4):
        for c in range(8):
            va = V1[r][c]
            vb = V2[r][c]
            vc = V3[r][c]
            RegA[c].value(va)
            RegB[c].value(vb)
            RegC[c].value(vc)
            time.sleep(.5)
    
