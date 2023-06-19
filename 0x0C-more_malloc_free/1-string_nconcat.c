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
		i++;

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
	unsigned int i, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= _strlen(s2))
		str = (char *)malloc(sizeof(_strlen(s1)) + _strlen(s2) + 1);
	if (n < _strlen(s2))
		str = (char *)malloc(sizeof(_strlen(s1)) + n + 1);

	if (str == NULL)
		return (NULL);

	len2 = _strlen(s1);
	if (1)
		for (i = 0; i < len2; i++)
			str[i] = s1[i];

	if (n >= _strlen(s2))
		for (i = 0; i < _strlen(s2); i++)
			str[_strlen(s1) + i] = s2[i];
	else
		for (i = 0; i < n; i++)
			str[_strlen(s1) + i] = s2[i];


	str[_strlen(s1) + i] = '\0';

	return (str);
}
