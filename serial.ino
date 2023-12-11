#include "HardwareSerial.h"
#include "WString.h"
#include "avr_term.hpp"

String get_cmd(String full_cmd) {
  int first_space = 0;
  while (full_cmd[first_space++] != ' ') {
  }
  return full_cmd.substring(0, first_space);
}

#define SPL(X) Serial.println(X)
#define SP(X) Serial.print(X)

void handle() {
  Serial.println("AVR> ");
  auto full_cmd = Serial.readString();
  auto cmd = get_cmd(full_cmd);
  if (cmd.compareTo("info") == 0) {
    SP("Sizeof color2pin: ");
    SPL(sizeof(color2pin));
  }
}