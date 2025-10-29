// Arduno uno R3 LED Switching on and off, Blinking

#define LED 13  // The Arduino UNO R3 pin 13 connected to the onboard LED

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);  // LED pin 13 switched on
  delay(300);               // 300 milliseconds delay
  digitalWrite(LED, LOW);   // LED pin 13 switched off
  delay(300);               // 300 milliseconds delay
}