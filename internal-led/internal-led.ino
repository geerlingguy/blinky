/*
  Blinky
  Make it look like my Arduino is doing something nefarious.
 */

int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  // Create a couple random delays.
  int on_delay = random(1, 250);
  int off_delay = random(1, 100);
  digitalWrite(led, HIGH);
  delay(on_delay);
  digitalWrite(led, LOW);
  delay(off_delay);
}


