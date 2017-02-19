# Lectrobox Keypad Shield

This is the software library for the [Lectrobox Keypad
Shield](http://www.lectrobox.com/keypad), a combination of hardware
and software that makes it simple for your sketches to access the
keypresses from the included 16-key keypad. The keypad can either be
mounted directly on the Arduino or connected remotely using a standard
Ethernet cable. The shield communicates with the Arduino via TWI,
using only the SDA and SCL pins, and does not consume any digital
inputs. It's compatible with both 8-bit and 32-bit, 5v and 3.3v
Arduinos. The hardware package, which includes a shield, a keypad, and
a small RJ45 interface adapter for remote keypad mounting, can be
purchased at [Amazon](http://www.amazon.com).

##Supported Arduinos
The shield and library have been tested and are known to work on a
variety of Arduino hardware:

###AVR-based Arduinos and clones:
* Arduino Uno R3
* Elegoo Uno R3
* Arduino Leonardo

###32-bit Arduinos:
* Arduino Zero

###Intel Curie Arduinos:
* Arduino 101

##Unsupported Arduinos

Note that the shield *does not support* older (pre-R3) Arduinos such
as the Uno R2, Uno R1, Diecimila, Duemilanove, and others that do not
have SDA and SCL pins as part of the digital pin block.

##Documentation

The small example program demonstrates how to use the Shield
library. The basic steps are:

* \#include "KeypadShield.h" in your sketch

* Declare a KeypadShield object

* Call keypadShield.begin() in setup()

* Call keypadShield.getNextKeypress() to query the shield for a recent
  keypress

* getNextKeypress() will return 0 if no keys have been pressed, or the
  character that was pressed. Possible values are the characters '0'
  through '9', the letters 'a through 'd', 's' for star, and 'p' for
  pound.

For full documentation or to purchase hardware,
see the [Keypad Shield's Main Site](http://www.lectrobox.com/keypad).
