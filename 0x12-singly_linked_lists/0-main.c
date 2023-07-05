#include <stdio.h>
#include "lists.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	size_t n;

	n = print_list(NULL);
	printf("-> %lu elements\n", n);
	return (0);
}
