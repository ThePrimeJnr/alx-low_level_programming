#include "lists.h"

size_t print_listint(const listint_t *h)
{
		size_t count = 0;

		for (; h; h = h->next, count++)
				printf("%i\n", h->n);

		return (count);
}
