#include "main.h"

int _strlen(char *str)
{
	int len;
	len = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	return len;
}

char *_strdup(char *str)
{
	char *dup;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = malloc((sizeof(char) * _strlen(str)) + 1 );

	if (dup == NULL)
	{
		printf("Null");
		return (NULL);
	}

	for (i = 0; i < (_strlen(str) + 1); i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
