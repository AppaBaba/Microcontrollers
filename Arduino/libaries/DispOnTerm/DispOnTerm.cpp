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

void DispOnTerm::info()
{
  curpos(15,20);
  txtcolor(1, 34, 40);
  Serial.print("You are using the Development Libary TermText");
  curpos(20,21);
  txtcolor(1, 32, 40);
  Serial.print("Created by Darell J LeGare");
}
