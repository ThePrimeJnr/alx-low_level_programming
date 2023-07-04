#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *temp;

	if (!h)
	{
		printf("Error\n");
		return (-1);
	}

	temp = h->next;
	printf("[%d] %s\n", h->len, h->str);
	temp = h->next;
	count++;

	while (temp->next)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		count++;
	}


	return (count);
}


