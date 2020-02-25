
int LED00 = 0; //Blue LED
int LED01  = 1; // Red LED

void setup()
{
  pinMode( LED00, OUTPUT);
  pinMode( LED01, OUTPUT);
}

void loop()
{
  digitalWrite( LED00, HIGH);
  digitalWrite( LED01, LOW);
  delay (500);
  digitalWrite( LED00, LOW);
  digitalWrite( LED01, HIGH);
  delay (500);
}
