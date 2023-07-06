#include "lists.h"

/**
* listint_len - A function that returns the element of a linked list.
* @h: head of the linked list.
* Return: The number of nodes.
*
* Author: DestinedCodes (Destiny Saturday)
* Date: 06-07-2023
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	for (; h; count++)
		h = h->next;

	return (count);
}
