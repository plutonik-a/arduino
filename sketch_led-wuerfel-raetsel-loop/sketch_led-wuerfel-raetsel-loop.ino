int pinLeds1 = 10;
int pinLeds2 = 9;
int pinLeds3 = 7;
int pinLed4 = 8;
int buttonPin = 13;
int buttonState;
long ran;
int time = 2000;

void setup ()
{
  pinMode (pinLeds1, OUTPUT);
  pinMode (pinLeds2, OUTPUT);
  pinMode (pinLeds3, OUTPUT);
  pinMode (pinLed4, OUTPUT);
  pinMode (buttonPin, INPUT);
  randomSeed(analogRead(0));
}

void loop()
{
  buttonState = digitalRead(buttonPin);

  four();
  delay (time);
  clear();
  two();
  delay (time);
  clear();
  delay (time);
  delay (time);
  delay (time);
  delay (time);
}

void clear() {
  digitalWrite (pinLeds1, LOW);
  digitalWrite (pinLeds2, LOW);
  digitalWrite (pinLeds3, LOW);
  digitalWrite (pinLed4, LOW);
}

void one () {
  digitalWrite (pinLed4, HIGH);
}

void two () {
  digitalWrite (pinLeds1, HIGH);
}

void three() {
  digitalWrite (pinLeds3, HIGH);
  digitalWrite (pinLed4, HIGH);
}

void four () {
  digitalWrite (pinLeds1, HIGH);
  digitalWrite (pinLeds3, HIGH);
}

void five() {
  digitalWrite (pinLeds1, HIGH);
  digitalWrite (pinLeds3, HIGH);
  digitalWrite (pinLed4, HIGH);
}

void six() {
  digitalWrite (pinLeds1, HIGH);
  digitalWrite (pinLeds2, HIGH);
  digitalWrite (pinLeds3, HIGH);
}

void minus() {
  digitalWrite (pinLeds2, HIGH);
  digitalWrite (pinLed4, HIGH);
}

