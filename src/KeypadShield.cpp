//
// Lectrobox Keypad Shield
// Arduino library v1.2, Feb 2017
// This code is in the public domain. Enjoy!
//
// info@lectrobox.com
//

#include "Arduino.h"
#include "KeypadShield.h"
#include "Wire.h"

// Start the keypad shield using an explicit TWI address.
void KeypadShield::begin(uint8_t twi_address) {
	twi_address_ = twi_address;
	Wire.begin();
}

// Start the keypad shield using a the default TWI address.
void KeypadShield::begin() {
	begin(DEFAULT_TWI_ADDRESS);
}

char KeypadShield::getNextKeypress() {
	Wire.requestFrom(twi_address_, (uint8_t) 1);

	if (Wire.available()) {
		return Wire.read();
	} else {
		return 0;
	}
}

    
