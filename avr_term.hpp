#pragma once

#include <Arduino.h>

typedef struct {
  char color;
  int pin;
} color2pin;

// HARDCODED DATA
const color2pin C2P[3] = {{.color = 0x42, .pin = 11},
                          {.color = 0x52, .pin = 12},
                          {.color = 0x47, .pin = 13}};

void handle();