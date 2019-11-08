#include <avr/io.h>

void Delay(void);

int main(void)
{
  DDRD = 0x70;      // set bit 4, 5, 6 of DDR register which makes PD4, PD5, PD6 an output

  while(1)
  {
    PORTD = 0x10;   // switch LED D4 on
    Delay();
    PORTD = 0x00;   // switch LED all off
    Delay();
    PORTD = 0x20;   // switch LED D5 on
    Delay();
    PORTD = 0x00;   // switch LED all off
    Delay();
    PORTD = 0x40;   // switch LED D6 on
    Delay();
    PORTD = 0x00;   // switch LED all off
    Delay();
  }
}

void Delay(void)
{
  volatile unsigned long count = 100000;

  while (count--);
}
