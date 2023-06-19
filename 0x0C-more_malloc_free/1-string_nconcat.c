#include "main.h"

/**
 * _strlen - calculates the length of string
 * @str: The string whose length is needed
 *
 * Return: The length of the str
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * string_nconcat - concatenates two string give a size for string 2
 * @s1: first string
 * @s2: second string
 * @n: Third string
 *
 * Return: Concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;

	str = (char *)malloc(sizeof(_strlen(s1)) + n + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < _strlen(s1); i++)
	{
			str[i] = s1[i];
	}


	for (i = 0; i < n; i++)
	{
		str[_strlen(s1) + i] = s2[i];
	}


	str[_strlen(s1) + i] = '\0';

	return (str);
}
