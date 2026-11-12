#include "headers/io.h"
#include "../lib/headers/string.h"
#include "../lib/headers/larpio.h"
#include "headers/main.h"

//executes a shell built-in command
void runBuiltin(char* cmd) {
    
    switch (multiple_streq((const char*[]){"clear", "echo", "exit"}, cmd, 3)) {

        case -1:
            //TODO: will have programs on file system later
            print("Unknown command");
        break;

        //clear
        case 0:
            clearScreen();
            x_pos = 2;
            y_pos = 0;
        break;

        //echo
        case 1:
            print("ching");
        break;

        //exit
        case 2:
            while (true) {}
        break;
    }
}
