/*
  DispTerm.cpp - Library for Terminals.
  Created by Darell J LeGare, Junw 26, 2018.
  Released into the public domain.
*/

#include "Arduino.h"
#include "DispOnTerm.h"

DispOnTerm::DispOnTerm(int p)
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
