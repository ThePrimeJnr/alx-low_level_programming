#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	unsigned int i;

	va_list print;

	va_start(print, format);
	while (i < strlen(format))
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(print, int));
				break;
			case 'i':
				printf("%i", va_arg(print, int));
				break;
			case 'f':
				printf("%f", va_arg(print, double));
				break;
			case 's':
				printf("%s",  va_arg(print, char *));
				break;
			default:
				break;
		}
		i++;
	}

	va_end(print);

	printf("\n");
}
