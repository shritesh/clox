#ifndef clox_compiler_h
#define clox_compiler_h

#include "scanner.h"

void compile(const char *source);
Token scanToken();

#endif
