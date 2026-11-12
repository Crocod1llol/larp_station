#ifndef STRING_H
#define STRING_H

//compares strings char by char and returns true if equal
//this will return false if any string is empty
bool streq(const char* str1, const char* str2);

//works the same as streq, but it compares multiple strings to compared arg
//returns the index on the matched string in str array
//returns -1 if all checks failed
int multiple_streq(const char* strs[], const char* compared, const unsigned int size);

//retunrs the amount of chars a string has (excluding \0)
//returns 0 if string empty (useful for checking if str empty)
unsigned int strlen(char* str);

//copies one string into another
//uses a delimiter
//doesnt do anything if one string is empty or if count is 0
void strcpy(const char* src, char* dest, unsigned int count);

#endif
