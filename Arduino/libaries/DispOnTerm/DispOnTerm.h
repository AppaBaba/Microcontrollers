/*
  DispOnTerm.h - Library for Terminals.
  Created by Darell J LeGare, Junw 26, 2018.
  Released into the public domain.
*/
#ifndef DispTerm_h
#define DispTerm_h

#include "Arduino.h"

class DispOnTerm
{
  private:
    byte row;
    byte col;
    String pin;
    byte at;
    byte fg;
    byte bg;
    byte mfg;
    byte mbg;
    
  public:
    DispOnTerm(String p);
    void clscn();
    void home();
    curpos(byte row, byte col);
    txtcolor(byte at, byte fg, byte bg);
    setfgc(byte mfg);
    setbgc(byte mbg);
    void info();
  
};

#endif
