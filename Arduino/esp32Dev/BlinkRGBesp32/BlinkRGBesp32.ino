// BlinkRGBesp32

#define red 14
#define green 12
#define blue 13

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH);
  delay(300);
  digitalWrite(red, LOW);
  delay(300);   

  digitalWrite(green, HIGH);
  delay(300);
  digitalWrite(green, LOW);
  delay(300);   
  
  digitalWrite(blue, HIGH);
  delay(300);
  digitalWrite(blue, LOW);
  delay(300);  
}
