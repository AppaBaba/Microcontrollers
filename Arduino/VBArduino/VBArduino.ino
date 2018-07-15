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
      if(OnOff=='1') {digitalWrite(12,HIGH);}
      else if (OnOff=='0') {digitalWrite(12,LOW);}
      }
   }

}
