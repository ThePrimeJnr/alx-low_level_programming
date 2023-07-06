#include "lists.h"

print_listint(const listint_t *h)
{
	for (; h; h = h->next)
		printf("%i", h->n);
}
