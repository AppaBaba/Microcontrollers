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

