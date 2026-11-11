#include "headers/io.h"
#include "../lib/headers/string.h"
#include "../lib/headers/larpio.h"
#include "headers/main.h"

//executes a shell built-in command
void runBuiltin(char* cmd) {
    
    if (streq(cmd, "echo")) {
        print("ching");
    }
    if (streq(cmd, "clear")) {
        clearScreen();
        x_pos = 2;
        y_pos = 0;
    }

}
