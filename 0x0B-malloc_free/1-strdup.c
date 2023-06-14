#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: string whose length will be returned
 *
 * Return: length of string
 *
 * _strdup - returns duplicate of a string
 * @str: original string
 *
 * Return: Null for failure of mem allocation else success
 */

int _strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

char *_strdup(char *str)
{
	char *dup;
	int i, size;

	if (str == NULL)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;

	dup = malloc(sizeof(char) * size);

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
