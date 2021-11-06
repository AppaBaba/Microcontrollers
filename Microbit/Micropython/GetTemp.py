from microbit import*

while True:
    t = temperature()
    if button_a.is_pressed():
        display.scroll(str(t))
    elif button_b.is_pressed():
        display.scroll("outside temp")
    else:
        display.scroll("Press button")