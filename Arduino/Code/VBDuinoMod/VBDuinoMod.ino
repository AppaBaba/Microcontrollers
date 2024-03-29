/*
  VBDuinoMod - Used to send number commands to
  Arduino. Goes with the Visual Basic project
  VBDuinoMod. Sends back Staus Also, works
  with Arduino Serial Monitor.
  It now works with my new VBDuinoMon program.
  It is A Visual Basic Arduino Serial Monitor
  look-alike.
  
  
  Created by Darell J LeGare, July 10, 2018.
  Released into the public domain.
*/

void setup() {
  pinMode(12,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int OnOff;
  if (Serial.available()){
    delay(100);
    while (Serial.available() > 0){
      OnOff = Serial.read();
      if(OnOff=='1') {
        digitalWrite(12,HIGH);
        Serial.println("Light is on ");
        }
      else if (OnOff=='0') {
        digitalWrite(12,LOW);
        Serial.println("Light is off ");
        }
      }
      
  }

}
