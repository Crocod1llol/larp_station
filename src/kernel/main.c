#include "headers/io.h"
#include "headers/shell.h"
#include "../lib/headers/larpbool.h"
#include "../lib/headers/string.h"
//#include "../lib/headers/larpint.h"

#define MAX_ARGS 64
#define MAX_CHAR_PER_ARG 2048

//declare globals that are useful for other c files
//such as the text position in the terminal
unsigned int x_pos = 2;
unsigned int y_pos = 2; 

void MainKernel(void) {

    clearScreen();
    puts(0, 0, "Welcome to larp_station (indev build)");

    char current_cmd[2048];
    unsigned int idx = 0;

    while (true) {

        putc(0, y_pos, '$');
        putc(1, y_pos, ' ');
    
        unsigned char key_pressed = readkey();

        if (key_pressed != 0) {

            //0x0E = backspace
            if (key_pressed == 0x0E) {
                putc(x_pos - 1, y_pos, 0);
                putc(x_pos, y_pos, 0);

                //erase last char from current_cmd
                current_cmd[idx] = '\0';
                current_cmd[idx - 1] = '\0';
                idx--;

                x_pos--;
                key_pressed = 0;
                continue;
            }

            //0x1C = enter
            if (key_pressed == 0x1C) {


                char tok_cmd[MAX_CHAR_PER_ARG][MAX_ARGS];
                strtok(current_cmd, tok_cmd, ' ');

                runBuiltin(tok_cmd);

                //erase current_cmd
                //2048 is current_cmd's max char count
                for (int i = 0; i < 2048; i++) {
                    current_cmd[i] = '\0';
                }
                idx = 0;

                x_pos = 2;
                y_pos += 2;
                continue;
            }

            unsigned char res = scancode_to_char(key_pressed);

            //func returns 0 if error detected
            if (res == 0) {
                continue;
            }

            current_cmd[idx] = res;
            putc(x_pos, y_pos, res);
           
            key_pressed = 0;
            idx++;
            x_pos++;
        }
    }

    while (true) {}
}
