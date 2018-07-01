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
  
  for (byte bgc = 50; bgc <= 72; bgc++) {
    for (byte fgc = 0; fgc <= 39; fgc++) {
      ColorTerm.setfgc(fgc);
      ColorTerm.setbgc(bgc);
      Serial.print("Hi");
      }
      Serial.println();
      }
      delay(300);
}
