#include "main.h"

/**
 * create_array - Create an array of certain certian filled with a char.
 * @size: size of array to be created
 * @c: character to fill the array
 *
 * Return: a pointer to the array creater or Null if fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * siz);

	int i;

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
