
const int RED   = 5;
const int GREEN = 6;
const int BLUE  = 7;

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
