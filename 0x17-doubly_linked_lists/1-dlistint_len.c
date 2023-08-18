#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* dlistint_len - a function that returns length of a linked list
* @h: pointer to the head of the linked list
* Return: the length of the linked list
*
* Author: Destiny Saturday (DestinedCodes)
* Date: 18-08-2023
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	do {
		h = h->next;
		i++;
	} while (h);

	return (i);
}
