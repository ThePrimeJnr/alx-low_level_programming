#include "main.h"

/**
 * _calloc - allocates memory given size and number
 * @nmemb: size of array
 * @size: size of data type
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmeb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
	{
		ptr = 0;
		ptr++;
	}

	return (ptr);
}
