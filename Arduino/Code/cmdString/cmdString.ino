/*
  cmdString -  Used to send string commands to
  Arduino. Works with Arduino Serial Monitor.
  It now works with my new VBDuinoMon program.
  It is A Visual Basic Arduino Serial Monitor
  look-alike.
  
  Created by Darell J LeGare, July 14, 2018.
  Released into the public domain.
*/

byte iByte;
String cmdString = "";

void setup() {
  
  Serial.begin(9600);
  pinMode(12, OUTPUT); 
  Serial.println("Light on/off");
  
}

void loop() {
  while (Serial.available()) {
    delay(10);  
    iByte = Serial.read();
    cmdString += char(iByte); 
  }
  if (cmdString.length() >0) {
    if (cmdString == "on") {
      Serial.println("Light on");
      digitalWrite(12, HIGH);
    }
    if (cmdString == "off") {
      digitalWrite(12, LOW);
      Serial.println("Light off");
    }
    cmdString="";
  }
  
}

