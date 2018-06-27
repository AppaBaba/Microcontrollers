/*
  TermTxt.h - Library for Terminals.
  Created by Darell J LeGare, Junw 26, 2018.
  Released into the public domain.
*/
#ifndef TermTxt_h
#define TermTxt_h

#include "Arduino.h"

class TermTxt
{
  private:
    byte row;
    byte col;
    int pin;
    byte at;
    byte fg;
    byte bg;
    
  public:
    TermTxt(int p);
    void clscn();
    void home();
    curpos(byte row, byte col);
    txtcolor(byte at, byte fg, byte bg);
  
};

#endif
