#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of linked list
 * @head: pointer to the head of the linked list
 * @n: contains data to be assigned to the new node
 * Return: new node if sucessful or NULL if the function fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *prevlast, *newlast;

	newlast = malloc(sizeof(dlistint_t));
	if (newlast == NULL)
		return (NULL);

	newlast->n = n;
	newlast->next = NULL;

	if (*head == NULL)
	{
		newlast->prev = NULL;
		*head = newlast;
		return (newlast);
	}

	prevlast = *head;
	while (prevlast->next != NULL)
		prevlast = prevlast->next;
	prevlast->next = newlast;
	newlast->prev = prevlast;

	return (newlast);
}
