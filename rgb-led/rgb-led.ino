/*
 RGB LED Control
 */

int redPin = 6;
int greenPin = 5;
int bluePin = 3;

int delayTime = 1000;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

int redVal;
int blueVal;
int greenVal;
 
void loop() {
  // Red.
  setColor(255, 0, 0);
  delay(delayTime);

  // Green.
  setColor(0, 255, 0);
  delay(delayTime);

  // Blue.
  setColor(0, 0, 255);
  delay(delayTime);

  // Drupal Blue.
  setColor(6, 120, 190);
  delay(5000);
}

void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}

