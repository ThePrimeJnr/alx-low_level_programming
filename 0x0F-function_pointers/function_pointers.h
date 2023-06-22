#ifndef FUNCTION_POINTERS_h
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
