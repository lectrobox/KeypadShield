//
// Lectrobox Keypad Shield
// Arduino library v1.1, Feb 2017
// This code is in the public domain. Enjoy!
//
// info@lectrobox.com
//

#ifndef __KeypadShield_h__
#define __KeypadShield_h__

class KeypadShield
{
 public:
	// Default TWI address of the Keypad Shield hardware. The shield's
	// 7-bit address is 0x32 (by default), or 0x75 if the OPT1 jumper
	// is shorted. Other addresses are possible only by reflashing the
	// shield's firmware.
	const uint8_t DEFAULT_ADDRESS = 0x32;

	// Public constructor that uses the default shield TWI address of 0x32.
	KeypadShield();

	// Public constructor that takes a 7-bit TWI address as an argument.
	KeypadShield(uint8_t address);

	// Start function that must be called before getNextKeypress().
	// Most sketches should call it in setup().
	void begin();

	// Get a single character from the keypad. Returns 0 if no character
	// is available. Otherwise, returns the next character typed. Digits
	// are '0' through '9'; letters are 'a' through 'd'; pound/hash is 'p'
	// and star is 's'.
	char getNextKeypress();

 private:
	// 7-bit TWI address of the shield.
	const uint8_t twi_address_;
};
  
#endif  // __KeypadShield_h__
