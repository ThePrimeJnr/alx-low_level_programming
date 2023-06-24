#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"
#include "string.h"

typedef struct
{
	char spec;
	void (*print)(char *);
} get_format;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void (*get_spec(char c))(char *);
void print_char(char s);
void print_int(int s);
void print_float(float s);
void print_str(char *s);

#endif /* VARIADIC_FUNCTIONS_H */
