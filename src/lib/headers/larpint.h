//contains standard integer/floats values
#ifndef LARPINT_H
#define LARPINT_H

//stdint style ints
typedef signed char int8_t;
typedef unsigned char uint8_t;

typedef signed short int16_t;
typedef unsigned short uint16_t;

typedef signed int int32_t;
typedef unsigned int uint32_t;

typedef signed long long int64_t;
typedef unsigned long long uint64_t;

//zig (or rust) style ints
typedef signed char i8;
typedef unsigned char u8;

typedef signed short i16;
typedef unsigned short u16;

typedef signed int i32;
typedef unsigned int u32;

typedef signed long long i64;
typedef unsigned long long u64;

//floats
typedef float  f32;
typedef double f64;

#endif
