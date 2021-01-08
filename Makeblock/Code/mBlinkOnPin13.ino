// Programm mBlinikOnPin13
// Blinks mCord LED pin 13.
// Works with Arduino Uno also.
// The mCore is like an Arduino Uno
// with onboard componets.
// Most Arduinos have a onboard LED on pin 13.
// The LED on mCore pin 13 is blue.

// Programmed by Darell J LeGate

int LEDonPin13 = 13;

void setup()
{
  pinMode( LEDonPin13, OUTPUT);
}

void loop()
{
  digitalWrite( LEDonPin13, HIGH);
  delay (500);
  digitalWrite( LEDonPin13, LOW);
  delay (500);
