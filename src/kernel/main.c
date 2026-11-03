#include "headers/io.h"
#include "headers/larpbool.h"

void MainKernel(void) {

    clearScreen();
    puts(0, 0, "Welcome to larp_station (indev build)");

    char current_cmd[2048];
    unsigned int idx = 0;

    unsigned int x_pos = 0;
    unsigned int y_pos = 3; //also known as line
    while (true) {

        /*
        putc(0, y_pos, '$');
        putc(1, y_pos, ' ');
        */
    
        unsigned char key_pressed = readkey();

        if (key_pressed != 0) {

            //0x8E = backspace
            if (key_pressed == 0x8E) {
                putc(x_pos - 2, y_pos, 0);
                putc(x_pos - 1, y_pos, 0);
                putc(x_pos, y_pos, 0);

                //erase last char from current_cmd
                current_cmd[idx - 1] = 0;

                x_pos = x_pos - 2;
                key_pressed = 0;
                continue;
            }

            //0x1C = enter
            if (key_pressed == 0x1C) {
                //TEMP:::
                //will have shell handling func later
                puts(0, y_pos, current_cmd);

                //erase current_cmd
                //2048 is current_cmd's max char count
                /*
                for (int i = 0; i < 2048; i++) {
                    current_cmd[i] = 0;
                }
                current_cmd[0] = '\0';
                idx = 0;
                */

                y_pos++;
                x_pos = 0;
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
