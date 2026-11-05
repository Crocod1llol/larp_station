//string
#include "headers/larpbool.h"

//compares strings char by char and returns true if equal
//this will return false if any string is empty
bool streq(char* str1, char* str2) {

    //check if one is empty
    if (str1[0] == '\0' || str2[0] == '\0') {
        return false;
    }
    
    unsigned int i = 0;
    while (true) {
        if (str1[i] == str2[i]) {
            i++;
            //continue;
        } else {
            return false;
        }

        if (str1[i] == '\0' && str2[i] == '\0') {
            return true;
        }

    }
}
