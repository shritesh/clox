#ifndef clox_compiler_h
#define clox_compiler_h

#include "object.h"
#include "scanner.h"
#include "vm.h"

ObjFunction *compile(const char *source);

Token scanToken();

#endif
