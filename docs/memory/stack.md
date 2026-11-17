# the stack

Starts at 0x90000 and grows down (ex. 0x90000 -> 0x8FFFF5 -> 0x8FFFE7 etc)

The instruction "mov esp, 0x90000" can be found in start.asm in src/kernel which makes the stack pointer start at 0x90000
