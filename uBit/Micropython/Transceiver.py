from microbit import*
import radio

radio.on()
while True:
    if button_a.was_pressed():
        radio.send('Hi')
    rx = radio.receive()
    if rx == 'Hi':
        display.show(Image.HAPPY)
        sleep (500)       
    display.show(Image.SAD)
        