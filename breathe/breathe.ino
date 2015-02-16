/*
 * Breathe - Make an RGB LED 'breathe' through fading.
 *
 * This could use a little fine-tuning, to make the fade a little more
 * 'Mac'-like.
 *
 * See also: http://thecustomgeek.com/2011/06/17/breathing-sleep-led/
 */

int redPin = 6;
int greenPin = 5;
int bluePin = 3;
int pinInUse = bluePin;

int delayTime = 1000;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

int brightness = 0; // initial brightness
int fadeAmount = 3; // how much to fade the LED per step

void loop()  {
  // Set initial brightness.
  analogWrite(pinInUse, brightness);

  // Change brightness for next time through the loop.
  brightness = brightness + fadeAmount;

  // Reverse direction at the end of the fade.
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount;
  }

  // Add a short delay so dimming is more apparent.
  delay(40);

  // If brightness is at 0, add a little extra delay.
  if (brightness == 0) {
    analogWrite(pinInUse, brightness);
    delay(700);
  }
}

