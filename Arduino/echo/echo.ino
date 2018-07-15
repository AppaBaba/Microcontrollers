/*
  echo -  used to send byte numbers to Arduino
  and sent char byte back to serial terminal.
  Works with Arduino Serial Monitor. Also works
  with terminal emulators without hitting enter 
  or send.
  
  Created by Darell J LeGare, July 14, 2018.
  Released into the public domain.
*/

byte iByte = 0;

void setup() {
  
  Serial.begin(9600);
  
}

void loop() {
  // Read incomming byte
  if (Serial.available() > 0) {
    // read the incoming byte:
    iByte = Serial.read();

    // Print byte as a char
    Serial.print(char(iByte));
  }
}

