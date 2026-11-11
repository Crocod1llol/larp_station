//stdio.h but larp
#include "../kernel/headers/io.h"
#include "../kernel/headers/main.h"

//prints a string on the next line using puts
//compared to puts, it manages terminal cursor pos automatically
void print(const char* str) {

    if (str[0] == '\0') {
        return;
    }
    
    puts(0, y_pos + 1, str);
}
