#include <Adafruit_NeoPixel.h>
#define npPin 4
#define NumOfLeds 128
const int buttonPinA = 23;
const int buttonPinB = 18;
Adafruit_NeoPixel pixels(NumOfLeds, npPin, NEO_GRB + NEO_KHZ800);
int buttonAState = 0;
int buttonBState = 0;
int red = 50;
int green = 0;
int blue = 0;

void setup() {
  Serial.begin(115200);
  pixels.begin();
  pinMode(buttonPinA, INPUT);
  pinMode(buttonPinB, INPUT);
  }

void loop() {
  pixels.clear();
  for (int r=0; r<10; r++) {
  pixels.setPixelColor(random(NumOfLeds), pixels.Color(red, green, blue));
  pixels.show();
  red = random(50);
  buttonAState = digitalRead(buttonPinA);
  buttonBState = digitalRead(buttonPinB);
  
  if (buttonAState == LOW) {
    // turn LED on
    green = random(50);
    } 
  if (buttonBState == LOW) {
    blue = random(50);
    }
  }
}
