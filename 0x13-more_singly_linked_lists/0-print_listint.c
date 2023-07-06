#include "lists.h"

/**
* print_listint - A function that prints all the element of a linked list.
* @h: head of the linked list.
* Return: The number of nodes.
*
* Author: DestinedCodes (Destiny Saturday)
* Date: 06-07-2023
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (; h; h = h->next, count++)
		printf("%i\n", h->n);

	return (count);
}
