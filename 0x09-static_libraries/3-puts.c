#include "main.h"

/**
 * _puts - puts
 * @s: s
 */

void _puts(char *s)
{

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
