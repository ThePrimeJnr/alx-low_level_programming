#include "main.h"

/**
 * _puts_recursion - recursively prints a string
 * @s: the string to be printed
 *
 * Author: Destiny Saturday (DestinedCodes)
 * Date: 07/06/2023
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

