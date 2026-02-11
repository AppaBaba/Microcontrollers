const int A = 5;
const int B = 11;

void setup() {

  Serial.begin(115200);
  
  Serial.println("ubit is ready!");
  
  pinMode(A, INPUT);
  pinMode(B, INPUT);
}

void loop(){
  if (! digitalRead(A)) {
    Serial.println("A pressed");
  }
  if (! digitalRead(B)) {
    Serial.println("B pressed");
  }
  delay(500);
}
