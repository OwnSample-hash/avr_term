#include <Arduino.h>

#include "avr_term.hpp"

void setup() {
  Serial.begin(115200);
  for (int i = 11; i < 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  if (Serial) {
    handle();
  }
}