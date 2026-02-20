from microbit import *
from tinkercademy import *
from music import *

basic.show_icon(IconNames.DIAMOND)

def on_forever():
    if tinkercademy.ad_keyboard(ADKeys.A, AnalogPin.P2):
        music.play_tone(349, music.beat(BeatFraction.WHOLE))
    if tinkercademy.ad_keyboard(ADKeys.B, AnalogPin.P2):
        music.play_tone(392, music.beat(BeatFraction.WHOLE))
    if tinkercademy.ad_keyboard(ADKeys.C, AnalogPin.P2):
        music.play_tone(440, music.beat(BeatFraction.WHOLE))
    if tinkercademy.ad_keyboard(ADKeys.D, AnalogPin.P2):
        music.play_tone(494, music.beat(BeatFraction.WHOLE))
    if tinkercademy.ad_keyboard(ADKeys.E, AnalogPin.P2):
        music.play_tone(523, music.beat(BeatFraction.WHOLE))
basic.forever(on_forever)
