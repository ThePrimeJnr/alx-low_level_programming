#include "function_pointers.h"

/**
 * print_name - function pointer that calls other function to print name
 *
 * @name: Name of the person to be printed
 * @f: function to be called
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
