/*
  AnaTermMon -  for Terminals.
  Created by Darell J LeGare, Junw 26, 2018.
  Released into the public domain.
*/

#include <DispOnTerm.h>

byte myrow;
byte mycol;
byte myat;
byte myfg;
byte mybg;
int ana = 0;

DispOnTerm term("Appa Software");


void setup()
{
  Serial.begin(9600);
  term.clscn();
  term.txtcolor(myat, myfg, mybg);
  Serial.println("Analog0 Analog1 Analog2 Analog3 Analog4 Analog5");
  term.info();
}

void loop()
{
  myrow = 2;
  mycol = 3;
  myat = 1;
  myfg = 31;
  mybg = 40;
  
  term.curpos(myrow,mycol);
  term.txtcolor(myat, myfg, mybg);
  for (int i = 0; i < 6; i++) {
    // analog input
    ana = analogRead(i);
    // print analog Value
    term.curpos(myrow, mycol);
    Serial.print(ana);
    mycol = mycol + 8;
  }
  delay(400);
}
