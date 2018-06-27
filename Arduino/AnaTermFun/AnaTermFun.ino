/*
  AnaTermFun - Functions are used for sending text
  to terminal emulator. Method is used for testing
  functions out before adding them to an Arduino
  Libary.
  
  Created by Darell J LeGare, Junw 26, 2018.
  Released into the public domain.
*/

int ana = 0;
byte at = 1;
byte fg = 33;
byte bg = 40;
byte row = 1;
byte col = 1;

void setup() {
  // Port set at 9600 bps
  Serial.begin(9600);
  clscn();
  txtcolor(at, fg, bg);
  Serial.println("Analog0 Analog1 Analog2 Analog3 Analog4 Analog5");

}

void loop() {
  at = 1;
  fg = 31;
  bg = 40;
  row = 2;
  col = 3;
  txtcolor(at, fg, bg);
  for (int i = 0; i < 6; i++) {
    // analog input
    ana = analogRead(i);
    // print analog Value
    curpos(row, col);
    Serial.print(ana);
    col = col + 8;
  }

  delay(400);

}

void clscn() {
  Serial.write(27);       // ESC command
  Serial.print("[2J");    // clear screen
}

void home() {
  Serial.write(27);
  Serial.print("[H");
}

byte curpos( byte row, byte col) {

  Serial.write(27);
  Serial.print("[");
  Serial.print(row);
  Serial.print(";");
  Serial.print(col);
  Serial.print("H");
}

byte txtcolor(byte at, byte fg, byte bg)
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

