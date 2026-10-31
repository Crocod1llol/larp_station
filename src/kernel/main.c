#include "headers/io.h"
#include "headers/larpbool.h"

void MainKernel(void) {

    clearScreen();
    putc(0, 0, 'l');
    putc(1, 0, 'A');
    putc(2, 0, 'r');
    putc(3, 0, 'p');

    while (true) {

        unsigned char key_pressed = readkey();
        unsigned int x_pos;

        if (key_pressed != 0) {

            //0x8E = backspace
            if (key_pressed == 0x8E) {
                putc(x_pos - 2, 3, 0);
                putc(x_pos - 1, 3, 0);
                putc(x_pos, 3, 0);

                x_pos = x_pos - 2;
                key_pressed = 0;
                continue;

            } else {

                unsigned char res = scancode_to_char(key_pressed);

                //it returns 0 if error detected
                if (res == 0) {
                    continue;
                }

                putc(x_pos, 3, res);
            
                key_pressed = 0;
                x_pos++;
            }
        }
    }

    while (true) {}
}
