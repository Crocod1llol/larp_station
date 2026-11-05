#include "headers/io.h"
#include "../lib/headers/string.h"

//executes a shell built-in command
void runBuiltin(char* cmd) {
    
    if (streq(cmd, "echo")) {
        puts(5, 7, "ECHO");
    }
}
