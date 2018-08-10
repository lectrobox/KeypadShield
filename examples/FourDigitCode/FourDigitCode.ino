#include <KeypadShield.h>

// This example sketch shows how to wait until someone enters a particular
// four-digit secret code into your Lectrobox Keypad. When the code is entered,
// the secretCodeEntered() function is called.

// You can change the code by changing "1234" to any code you want.
#define SECRET_CODE "1234"

// Make sure the CODE_LENGTH constant matches the length of the code above.
#define CODE_LENGTH 4

///////////////////////////////////////////////////////////////

KeypadShield keypad;
char lastChars[CODE_LENGTH];

void setup() {
  keypad.begin();
  for (int i = 0; i < CODE_LENGTH; i++) {
    lastChars[i] = 0;
  }
}

// This function is executed when the code is entered correctly.
void secretCodeEntered() {
  // Write code here that should be executed when the code has been entered.
}

void loop() {
  char nextChar = keypad.getNextKeypress();

  if (nextChar != 0) {
    // Move all previously seen chars forward one position in the array.
    for (int i = 0; i < CODE_LENGTH-1; i++) {
      lastChars[i] = lastChars[i+1];
    }

    // Add the newly received character to the end.
    lastChars[CODE_LENGTH-1] = nextChar;

    // Check to see if the code is now correct.
    bool codeCorrect = true;
    for (int i = 0; i < CODE_LENGTH; i++) {
      if (lastChars[i] != SECRET_CODE[i]) {
        codeCorrect = false;
      }
    }

    // If so, execute the secret code function!
    if (codeCorrect) {
      secretCodeEntered();
    }
  }

  delay(100);
}

