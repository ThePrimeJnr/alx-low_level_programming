#include "lists.h"

/**
* print_len - A function that returns the number of elements in a linked list_t list
* @h: The head of a linked list
*
* Return: Number of elements in linked list
*
* Author: DestinedCodes (Destiny Saturday)
* Date: 05-07-2023
*/
size_t print_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	printf("[%d] %s\n", h->len, h->str);

	return (count);
}
