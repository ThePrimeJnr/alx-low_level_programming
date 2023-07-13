#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, dec;

	for(i = 0; b[i]; i++)
		dec += (atoi((char *)b[i]) * _pow(2, i));

	return (dec);
}

unsigned int _pow(unsigned int base, unsigned int pow)
{
	unsigned int i, result = base;

	for (i = 1; i < pow; i++)
		result *= base;

	return (result);
}

