#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (!h)
	{
		printf("Error\n");
		return (-1);
	}

	while (h->next)
	{
		if (!h->str)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}


	return (count);
}


