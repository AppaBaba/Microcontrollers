// Program MeAurigaRGB for Makeblock Auriga.
// Auriga is like an Arduino Mega with onboard
// modules.The Makeblock Lib for Arduino IDE 
// is used.

//Red, Blue, Green LEDs circles the ring

// Programmed by Darell J LeGare 

#include "MeAuriga.h"

#define red        125,000,000
#define green      000,125,000
#define blue       000,000,125
#define blank      000,000,000
 
#define LEDNUM  12
#define LEDPORT 44

MeRGBLed led(0);
                           
void setup()
{
  led.setpin(LEDPORT);
  led.setNumber(LEDNUM);
}

void loop()
{
  for (int i=0; i<10; i++)
  {
  led.setColorAt (i, red);
  led.setColorAt (i + 1, green);
  led.setColorAt (i + 2, blue);
  led.show();
  delay (500);
  led.setColorAt (i, blank);
  }
  led.setColorAt (10, blank);
  led.setColorAt (11, blank);
  
}
