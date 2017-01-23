//
// Lectrobox Keypad Shield
// Arduino library v1.0, Feb 2017
// This code is in the public domain. Enjoy!
//
// info@lectrobox.com
//

#ifndef __KeypadShield_h__
#define __KeypadShield_h__

class KeypadShield
{
 public:
	// Public constructor that uses the default shield TWI address of 50.
	KeypadShield();

	// Public constructor that takes a TWI address as an argument.
	KeypadShield(uint8_t address);

	// Get a single character from the keypad. Returns 0 if no character
	// is available. Otherwise, returns the next character typed. Digits
	// are '0' through '9'; letters are 'a' through 'd'; pound/hash is 'p'
	// and star is 's'.
	char getNextKeypress();

 private:
	void init();

	// TWI address of the shield.
	const uint8_t twi_address_;
};
  
#endif  // __KeypadShield_h__
