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

