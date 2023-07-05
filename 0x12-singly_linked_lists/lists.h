#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_t - Struct definition for each node
 * @str: String data stored in each node
 * @len: Length of string passed into the node
 * @next: Pointer of type struct list_l to the next node
 *
 * Description: Structure for each node in the singly linked list
 *
 * Author: DestinedCodes (Destiny Saturday)
 * Date: 05-07-2023
 */
typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif /* LISTS_H */
