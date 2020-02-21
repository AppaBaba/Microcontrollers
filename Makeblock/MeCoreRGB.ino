// Program MeCoreRGB for Makeblock mCore
// The Makeblock Lib for Arduino is used
//Red, Blue, Green LEDs right to left

// Programmed by Darell J LeGare 

#include "MeMCore.h"

#define red        125,000,000
#define green      000,125,000
#define blue       000,000,125

MeRGBLed led(PORT_7, 2);  
                             
void setup()
{
}

void loop()
{
  led.setColorAt (0, red);
  led.setColorAt (1, blue);
  led.show();
  delay (500);
  led.setColorAt (0, green);
  led.setColorAt (1, red);
  led.show();
  delay (500);
  led.setColorAt (0, blue);
  led.setColorAt (1, green);
  led.show();
  delay (500);
}
