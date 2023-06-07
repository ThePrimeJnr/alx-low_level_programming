#include "main.h"

/**
 * _strlen_recursion - prints the length of a string recursively
 * @s: The string whose length would be printed
 *
 * Return: The length of string, Always success
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
