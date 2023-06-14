#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: string whose length will be returned
 *
 * Return: length of string
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

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, size;

	i = 0;
	j = 0;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}

	size = _strlen(s1) + _strlen(s2) + 1;

	s = malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}

	s[size] = '\0';

	return (s);
}
