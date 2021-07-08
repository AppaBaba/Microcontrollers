

#include <Adafruit_NeoPixel.h>
#define npPin 4
#define NumOfLeds 128
Adafruit_NeoPixel pixels(NumOfLeds, npPin, NEO_GRB + NEO_KHZ800);
int i = 0;
void setup() {
  
  pixels.begin();
}

void loop() {
  pixels.clear();
  for (int r=0; r<10; r++) {
    pixels.setPixelColor(random(NumOfLeds), pixels.Color(random(50), random(50), random(50)));
    pixels.show();
    delay(100);
  }
}
