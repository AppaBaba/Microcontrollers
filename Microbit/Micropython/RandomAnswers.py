from microbit import *
import random

answers = ["Yes", "No", "Mabey", "Sometimes", "Never", "Not", "Ya" ]

while True:
    if button_a.is_pressed():
        display.scroll(random.choice(answers))
    elif button_b.is_pressed():
        display.scroll("Wrong")
    else:
        display.scroll("Press A button for Answer")
        
display.clear()

