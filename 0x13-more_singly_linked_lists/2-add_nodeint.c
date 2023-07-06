#include "lists.h"

/**
* add_nodeint - A function that adds a node at the beginning of a linked list.
* @head: Head of the linked list
* @n: data in the added node
* Return: Added node
*
* Author: DestinedCodes (Destiny Saturday)
* Date: 06-07-2023
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
