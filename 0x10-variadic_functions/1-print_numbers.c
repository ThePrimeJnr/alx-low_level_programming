#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by newline
 * @separator: string to be printed between numbers
 * @n: Number of intergers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	if (separator == NULL)
		separator = "";

	va_start(nums, n);

	for (i = 1; i < n; i++)
	{
		printf("%i", va_arg(nums, unsigned int));
		printf("%s ", separator);
	}
	printf("%i\n", va_arg(nums, unsigned int));

	va_end(nums);
}
