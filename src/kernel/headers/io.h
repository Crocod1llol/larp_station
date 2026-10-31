#include "larpbool.h"

#ifndef IO_H
#define IO_H

#define VGA_ADDR ((volatile unsigned char*)0xB8000)

//general functions

//this reads one byte from an port (ex keyboard) and returns it
unsigned char inb(unsigned short port);

//--------------- VIDEO --------------------

//puts a char is the row/col screen
void putc(int x, int y, char c);

//clears the screen
void clearScreen();

//------------------------KEYBOARD --------------------------

#define KEYBOARD_DATA_ADDR    0x60
#define KEYBOARD_STATUS_ADDR  0x64

//if the shift key/caps lock is on
extern bool shift;
extern bool caps_lock;

//tries to read the KEYBOARD_DATA_ADDR after checking KEYBOARD_STATUS_ADDR and return the char
//NOTICE: returns raw scancode
unsigned char readkey();

//scancode set 1
extern const char scancode_table[128];
extern const char scancode_table_shift[128];

//convert a raw keyboard scancode to a char (ex 'a')
//can return 0 if an invalid keypress has been detected
unsigned char scancode_to_char(unsigned char in);

//handles shfit and caps lock
bool handleShift();

#endif
