#include "led.h"

int PIN;

Led LED(13);

Led::Led(int PIN) {
  this->PIN = PIN;
}

void Led::ON() {
  digitalWrite(PIN, HIGH);
}

void Led::OFF() {
  digitalWrite(PIN, LOW);
}

void setup() {
  pinMode(PIN, OUTPUT);
}

void loop() {
  LED.ON();
  delay(1000);
  LED.OFF();
  delay(1000);
}
