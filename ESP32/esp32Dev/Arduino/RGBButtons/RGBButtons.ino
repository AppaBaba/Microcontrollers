// Define GPIO pins


const int buttonR = 15;
const int buttonG = 16;
const int buttonB = 17;
const int RedLED = 18;
const int GreenLED = 19;
const int BlueLED = 21;

void setup() {
  pinMode(buttonB, INPUT_PULLUP);
  pinMode(buttonG, INPUT_PULLUP);
  pinMode(buttonR, INPUT_PULLUP);

  pinMode(BlueLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);
  pinMode(RedLED, OUTPUT);

  Serial.begin(115200);
}

void loop() {
  int stateB = digitalRead(buttonB);
  int stateG = digitalRead(buttonG);
  int stateR = digitalRead(buttonR);

  if (stateB == LOW) { // Button pressed
    digitalWrite(BlueLED, HIGH); // Turn LED on
  } else { // Button not pressed
    digitalWrite(BlueLED, LOW);  // Turn LED off
  }

  if (stateG == LOW) { // Button pressed
    digitalWrite(GreenLED, HIGH); // Turn LED on
  } else { // Button not pressed
    digitalWrite(GreenLED, LOW);  // Turn LED off
  }

  if (stateR == LOW) { // Button pressed
    digitalWrite(RedLED, HIGH); // Turn LED on
  } else { // Button not pressed
    digitalWrite(RedLED, LOW);  // Turn LED off
  }

  delay(50);
}
