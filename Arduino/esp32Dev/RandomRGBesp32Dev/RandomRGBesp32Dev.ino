
const int RED   = 14;
const int GREEN = 12;
const int BLUE  = 13;

void setup() {
  pinMode(RED,   OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE,  OUTPUT);
}

void loop() {
  analogWrite(RED,   random(255));
  analogWrite(GREEN, random(255));
  analogWrite(BLUE,  random(255));

  delay(300);
}
