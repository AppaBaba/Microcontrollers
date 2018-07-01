/*
  DispTerm.cpp - Library for Terminals.
  Created by Darell J LeGare, Junw 26, 2018.
  Released into the public domain.
*/

#include "Arduino.h"
#include "DispOnTerm.h"

DispOnTerm::DispOnTerm(String p)
{
  pin = p;
}

void DispOnTerm::clscn()
{
 Serial.write(27);
 Serial.print("[2J");
}

void DispOnTerm::home()
{
  Serial.write(27);
  Serial.print("[H");
}

DispOnTerm::curpos(byte row, byte col)
{
  Serial.write(27);
  Serial.print("[");
  Serial.print(row);
  Serial.print(";");
  Serial.print(col);
  Serial.print("H");
}

DispOnTerm::txtcolor(byte at, byte fg, byte bg)
{
  Serial.write(27);
  Serial.print("[");
  Serial.print(at);
  Serial.print(";");
  Serial.print(fg);
  Serial.print(";");
  Serial.print(bg);
  Serial.print("m");
}

DispOnTerm::setfgc(byte mfg)
{
  Serial.write(27);
  Serial.print("[38;5;");
  Serial.print(mfg);
  Serial.print("m");
}

DispOnTerm::setbgc(byte mbg)
{
  Serial.write(27);
  Serial.print("[48;5;");
  Serial.print(mbg);
  Serial.print("m");
}

void DispOnTerm::info()
{
  curpos(15,20);
  txtcolor(1, 34, 40);
  Serial.print("You are using the Release Libary DispOnTerm");
  curpos(20,21);
  txtcolor(1, 32, 40);
  Serial.print("Created by Darell J LeGare");
  curpos(22,25);
  txtcolor(1, 36, 40);
  Serial.print(pin);
}
