#include "variadic_functions.h"

/**
 * print_strings - prints numbers followed by newline
 * @separator: string to be printed between numbers
 * @n: Number of intergers passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strs;

	va_start(strs, n);
	if (separator == NULL)
		separator = "";

	for (i = 1; i < n; i++)
	{
		str = va_arg(strs, char *);

		if (str == NULL)
			printf("(nil)%s", separator);
		else
			printf("%s%s", str, separator);
	}
	if (n > 0)
		printf("%s", va_arg(strs, char *));

	va_end(strs);

	printf("\n");
}
