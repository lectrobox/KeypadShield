#include <KeypadShield.h>

KeypadShield keypad;

void setup() {
  Serial.begin(9600);
  Serial.print("Starting keypad monitor!\n");
}

void loop() {
  char nextChar = keypad.getNextKeypress();

  if (nextChar != 0) {
    Serial.print("Got key: ");
    Serial.print(nextChar);
    Serial.print("\n");
  }

  delay(100);
}

