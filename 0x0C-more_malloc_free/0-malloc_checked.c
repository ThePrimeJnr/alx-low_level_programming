#include "main.h"

void *malloc_checked(unsigned int b)
{
	void *space;

	space = malloc(b);

	if (space == NULL)
	{
		free(space);
		return ((void *)98);
	}

	return(space);
}
