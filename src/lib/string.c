//string func yayyy

#include "headers/larpbool.h"
//#include "headers/larpint.h"

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

//retunrs the amount of chars a string has (excluding \0)
//returns 0 if string empty (useful for checking if str empty)
unsigned int strlen(char* str) {

    //check if string empty
    if (str[0] == '\0') {
        return 0;
    }

    //we have already checked if first char is 0 so we start with 1
    unsigned int count = 1;
    while (true) {
        if (str[count] == '\0') {
            return count;
        } else {
            count++;
        }
    }

    //you would never reach this, but if something goes wrong
    //for absolutely no reason at all, return 69 lol
    return 69;
}

//copies one string into another
//uses a delimiter
//doesnt do anything if one string is empty or if count is 0
void strcpy(const char* src, char* dest, unsigned int count) {

    //check if one string is empty so we dont fuck up anything
    if (src[0] == '\0' || dest[0] == '\0' || count == 0) {
        return;
    }

    unsigned int c_count = 1; //char count, definately wont get confusing :troll:
    while (c_count < count) {
        if (src[count] == '\0' || dest[count] == '\0') {
            return;
        }

        dest[count] = src[count];
        count++;
    }
}
