# DYNAMIC MEM MANAGMENT

There are no predefined chunks so when allocating memory, memory chunks (or pages) will be created, which will contain some info at the start of it:

1. 1 bit at the very start, marks that there is a mem chunk being used (this is called the "used bit")
2. size: how many bytes does this memory page contain
3. a special byte (0xABEF0) that will be the delimiter between the info part and the actual memory part

**unfinished, feature being worked on**
