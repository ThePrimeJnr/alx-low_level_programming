#include "main.h"

char *_strdup(char *str)
{
	char *dup;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = malloc((sizeof(char) * 7));

	if (dup == NULL)
	{
		printf("Null");
		return (NULL);
	}

	for (i = 0; i < 7; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
