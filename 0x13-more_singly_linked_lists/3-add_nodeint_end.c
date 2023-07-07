#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *curr = *head;

	node = malloc(sizeof(listint_t));
	node->n = n;
	node->next = NULL;

	if (!*head)
	{
		*head = node;
		return (node);
	}
	while (curr->next)
		curr = (curr)->next;

	curr->next = node;

	return (node);
}
