#include "headers/io.h"
#include "headers/larpbool.h"

void MainKernel(void) {

    clearScreen();
    putc(0, 0, 'l');
    putc(1, 0, 'a');
    putc(2, 0, 'r');
    putc(3, 0, 'p');

    while (true) {

        unsigned char key_pressed = readkey();
        unsigned int x_pos;

        if (key_pressed != 0) {
            unsigned char res = scancode_to_char(key_pressed);
            //it returns 0 if error detected
            if (res == 0) {
                continue;
            }

            //scancode_table[key_pressed]
            putc(x_pos, 3, res);
            //putc(x_pos, 3, key_pressed);
            //putc(x_pos, 3, res);
            
            key_pressed = 0;
            x_pos++;
        }
    }

    while (true) {}
}
