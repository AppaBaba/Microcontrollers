#include <Adafruit_NeoPixel.h>
#define npPin 4
#define NumOfLeds 128
const int buttonPinA = 23;
const int buttonPinB = 18;
const int UpPin = 35;
const int DownPin = 34;
const int LeftPin = 26;
const int RightPin = 25;
const int ClickPin = 27;
const int DialPin = 36;
int buttonAState = 0;
int buttonBState = 0;
int UpState = 0;
int DownState = 0;
int LeftState = 0;
int RightState = 0;
int ClickState = 0;
int NothingState = 0;
int DialState = 0;
int red = 50;
int green = 0;
int blue = 0;
int mx = 10;
Adafruit_NeoPixel pixels(NumOfLeds, npPin, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  pixels.begin();
  pinMode(buttonPinA, INPUT);
  pinMode(buttonPinB, INPUT);
  pinMode(UpPin, INPUT);
  pinMode(DownPin, INPUT);
  pinMode(LeftPin, INPUT);
  pinMode(RightPin, INPUT);
  pinMode(ClickPin, INPUT);
  }

void loop() {
  pixels.clear();
  for (int r=0; r<mx; r++) {
  pixels.setPixelColor(random(NumOfLeds), pixels.Color(red, green, blue));
  pixels.show();
  buttonAState = digitalRead(buttonPinA);
  buttonBState = digitalRead(buttonPinB);
  UpState = digitalRead(UpPin);
  DownState = digitalRead(DownPin);
  LeftState = digitalRead(LeftPin);
  RightState = digitalRead(RightPin);
  ClickState = digitalRead(ClickPin);
  DialState = analogRead(DialPin);
  
  if (buttonAState == LOW)
    green = random(50);
  else if (buttonBState == LOW)
    blue = random(50);
  else if (UpState == LOW)
    red = random(50);
  else if (DownState == LOW)
    red = random(25);
  else if (LeftState == LOW)
    red = random(25);
  else if (RightState == LOW)
    red = random(75);
  else if (DialState < 2000)
    mx = 10;
  else if (DialState > 3000)
    mx = 128;
  else
    mx  = 63;  
  }
}
