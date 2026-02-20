#include "mbed.h"

DigitalOut C11(P0_5, 0); // low for colum 2
DigitalOut LED11(P0_14); // high for row 2

int main() {
    while(1) {
        LED11 = 1;
        wait(0.2);
        LED11 = 0;
        wait(0.2);
    }
}
