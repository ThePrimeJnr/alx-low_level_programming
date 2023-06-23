#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of a set of integers
 * @n: integers passed into the function
 *
 * Return: Sum of the integers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list arr;

	sum = 0;
	va_start(arr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arr, unsigned int);
		if (n == 0)
			return (0);
	}

	va_end(arr);

	return (sum);
}
