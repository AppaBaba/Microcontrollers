/*
  Colorterm -  Demo for Terminals.
  Created by Darell J LeGare, Junw 26, 2018.
  Released into the public domain.
*/

#include <DispOnTerm.h>

byte myrow;
byte mycol;
byte myat;
byte myfg;
byte mybg;
enum myat {
  rst,
  bld,
  dim,
  so,
  us,
  blink
};
enum myfg {
  fgblk  = 30,
  fgred  = 31,
  fggrn  = 32,
  fgylw  = 33,
  fgblue = 34,
  fgmgnt = 35,
  fgcyn  = 36,
  fgwht  = 37
};
enum mybg {
  bgblk  = 40,
  bgred  = 41,
  bggrn  = 42,
  bgylw  = 43,
  bgblue = 44,
  bgmgnt = 45,
  bgcyn  = 46,
  bgwht  = 47
};

DispOnTerm ColorTerm(13);


void setup()
{
  Serial.begin(9600);
  ColorTerm.clscn();
  ColorTerm.info();
}

void loop()
{
  ColorTerm.home();
  for (byte bgc = bgblk; bgc <= bgwht; bgc++) {
  for (byte fgc = fgred; fgc <= fgwht; fgc++) {
  ColorTerm.txtcolor(bld, fgc, bgc);
  Serial.print("Hi there");
  }
  Serial.println();
  }
  delay(300);
}
