#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: The array to search from
 * @size: number of element in the array
 * @cmp: compares to verify string identity
 *
 * Return: index of string found, else -1 - fail
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
