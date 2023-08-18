#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	do {
		printf("%d\n", h->n);
		h = h->next;
		i++;
	} while (h);

	return (i);
}
