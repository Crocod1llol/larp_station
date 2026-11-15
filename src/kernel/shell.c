#include "headers/io.h"
#include "../lib/headers/string.h"
#include "../lib/headers/larpio.h"
#include "headers/main.h"

//executes a shell built-in command
void runBuiltin(char cmd[][MAX_ARGS]) {
    
    switch (multiple_streq((const char*[]){"clear", "exit", "echo"}, cmd[0], 3)) {

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

        //exit
        case 1:
            while (true) {}
        break;

        //echo
        case 2:
            print(cmd[1]);
        break;

    }
}
