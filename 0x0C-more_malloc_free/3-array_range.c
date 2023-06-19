#include "main.h"

/**
 * array_range - creates an array containing ingers given range
 * @min: least number in the range
 * @max: largest number in the range
 *
 * Return: Array containing Numbers given range
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = (int *)malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		arr[i] = min;
	}

	return (arr);
}
