//
// Lectrobox Keypad Shield
// Arduino library v1.2, Feb 2017
// This code is in the public domain. Enjoy!
//
// info@lectrobox.com
//

#ifndef __KeypadShield_h__
#define __KeypadShield_h__

class KeypadShield
{
 public:
	// Public constructor
	KeypadShield() {}
	
	// Default TWI address of the Keypad Shield hardware. The shield's
	// 7-bit address is 0x32 (by default), or 0x75 if the OPT jumper
	// is shorted. Other addresses are possible only by reflashing the
	// shield's firmware.
	static const uint8_t DEFAULT_TWI_ADDRESS = 0x32;

	// Start function that must be called before getNextKeypress().
	// Most sketches should call it in setup().
	// This uses the default TWI 7-bit TWI address of 0x32.
	void begin();

	// A version of start() that lets you specify the 7-bit TWI address.
	void begin(uint8_t twi_address);

	// Get a single character from the keypad. Returns 0 if no character
	// is available. Otherwise, returns the next character typed. Digits
	// are '0' through '9'; letters are 'a' through 'd'; pound/hash is 'p'
	// and star is 's'.
	char getNextKeypress();

 private:
	// 7-bit TWI address of the shield.
	uint8_t twi_address_;
};
  
#endif  // __KeypadShield_h__
