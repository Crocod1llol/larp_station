#include "../../lib/headers/larpint.h"

#ifndef SHELL_H
#define SHELL_H

//executes a shell built-in command
//returns a unsigned 8-bit int (u8)
//returns 0 if everything succeded
//returns 1 if command not found
//returns 2 if command failed
//returns 3 if screen will be cleared
u8 runBuiltin(char* cmd);

#endif
