#include "headers/io.h"
#include "../lib/headers/string.h"
#include "../lib/headers/larpint.h"

//executes a shell built-in command
//returns a unsigned 8-bit int (u8)
//returns 0 if everything succeded
//returns 1 if command not found
//returns 2 if command failed
//returns 3 if screen will be cleared
u8 runBuiltin(char* cmd) {
    
    if (streq(cmd, "echo")) {
        puts(5, 7, "ECHO");
    }
    if (streq(cmd, "clear")) {
        clearScreen();
        return 3;
    }

    return 0;
}
