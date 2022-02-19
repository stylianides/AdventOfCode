
#ifndef ADVENT_H
#define ADVENT_H

#include <cstdint>

typedef int8_t int8;
typedef int16_t int16;
typedef int32_t int32;
typedef int64_t int64;

typedef uint8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;

typedef int32 bool32;

typedef float real32;
typedef double real64;

typedef size_t mem_index;

#define Assert(Expr) if(!(Expr)) {*(int *)0 = 1;}
#define InvalidCodePath(Message) Assert(!Message)

#endif //ADVENT_H
