#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: 98 when fails else pointer of size
 */

void *malloc_checked(unsigned int b)
{
	void *space;

	space = malloc(b);

	if (space == NULL)
	{
		free(space);
		exit(98);
	}

	return (space);
}
