/*
  AnaTermMon -  for Terminals.
  Created by Darell J LeGare, Junw 26, 2018.
  Released into the public domain.
*/

#include "TermTxt.h"

byte myrow;
byte mycol;
byte myat = 1;
byte myfg = 33;
byte mybg = 40;
int ana = 0;

TermTxt termtxt(13);


void setup()
{
  Serial.begin(9600);
  termtxt.clscn();
  termtxt.txtcolor(myat, myfg, mybg);
  Serial.println("Analog0 Analog1 Analog2 Analog3 Analog4 Analog5");
  termtxt.curpos(15,20);
  termtxt.txtcolor(1, 34, 40);
  Serial.print("You are using the Development Libary TermText");
  termtxt.curpos(20,21);
  termtxt.txtcolor(1, 32, 40);
  Serial.print("Created by Darell J LeGare");

}

void loop()
{
  myrow = 2;
  mycol = 3;
  myat = 1;
  myfg = 31;
  mybg = 40;
  
  termtxt.curpos(myrow,mycol);
  termtxt.txtcolor(myat, myfg, mybg);
  for (int i = 0; i < 6; i++) {
    // analog input
    ana = analogRead(i);
    // print analog Value
    termtxt.curpos(myrow, mycol);
    Serial.print(ana);
    mycol = mycol + 8;
  }
  delay(400);
}
