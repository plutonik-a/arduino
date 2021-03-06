
int pinLeds1 = 10;
int pinLeds2 = 9;
int pinLeds3 = 7;
int pinLed4 = 8;
int buttonPin = 13;
int buttonState;
long ran;
int time = 1000;

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
  
  if (buttonState == HIGH) {
    ran = random(1, 7);
    if (ran == 1) {
      one();
      delay (time);
    }
    if (ran == 2) {
      two();
      delay (time);
    }
    if (ran == 3) {
      three();
      delay (time);
    }
    if (ran == 4) {
      four();
      delay (time);
    }
    if (ran == 5) {
      five();
      delay (time);
    }
    if (ran == 6) {
      six();
      delay (time);
    }
  }
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
