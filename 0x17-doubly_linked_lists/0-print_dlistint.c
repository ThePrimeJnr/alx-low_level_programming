#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_dlistint - a function that prints the data in a linked lists
* @h: pointer to the head of the linked list
* Return: the length of the linked list
*
* Author: Destiny Saturday (DestinedCodes)
* Date: 18-08-2023
*/
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
