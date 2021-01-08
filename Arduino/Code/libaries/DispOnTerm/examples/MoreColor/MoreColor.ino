/*
  MoreColor -  Demo for Terminals.
  Created by Darell J LeGare, Junw 26, 2018.
  Released into the public domain.
*/

#include <DispOnTerm.h>


DispOnTerm ColorTerm("Appa Software");


void setup()
{
  Serial.begin(9600);
  ColorTerm.clscn();
}

void loop()
{
  ColorTerm.home();
  byte sbgc = 0;
  byte lbgc = 21;
  byte sfgc = 0;
  byte lfgc = 60;
  
  for (int delta = 0; delta <= 5; delta++) {
    for (byte bgc = sbgc; bgc <= lbgc; bgc++) {
      char mychar = 65;
      ColorTerm.setbgc(bgc);
      for (byte fgc = sfgc; fgc <= lfgc; fgc++) {
        ColorTerm.setfgc(fgc);
        Serial.print(mychar);
        mychar = mychar + 1;
      }
      Serial.println();
    }
    delay(300);
    ColorTerm.home();
    sfgc = sfgc + 16;
    lfgc = lfgc + 16;
    sbgc = sbgc + 22;
    lbgc = lbgc + 22;
  }        
}
