#ifndef clox_compiler_h
#define clox_compiler_h

#include "scanner.h"
#include "vm.h"

bool compile(const char *source, Chunk *chunk);

Token scanToken();

#endif
