//
// Lectrobox Keypad Shield
// Arduino library v1.1, Feb 2017
// This code is in the public domain. Enjoy!
//
// info@lectrobox.com
//

#include "Arduino.h"
#include "KeypadShield.h"
#include "Wire.h"

KeypadShield::KeypadShield() : twi_address_(KeypadShield::DEFAULT_ADDRESS) {}

KeypadShield::KeypadShield(uint8_t address) : twi_address_(address) {}

void KeypadShield::begin() {
	Wire.begin();
}

char KeypadShield::getNextKeypress() {
	Wire.requestFrom(twi_address_, (uint8_t) 1);

	if (Wire.available()) {
		return Wire.read();
	} else {
		return 0;
	}
}

    
