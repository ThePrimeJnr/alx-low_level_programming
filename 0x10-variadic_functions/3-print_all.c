#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	unsigned int i, pass;
	char *str;

	va_list print;

	va_start(print, format);

	i = 0;
	while (format && format[i])
	{
		pass = 1;
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
				str = va_arg(print, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}

				printf("%s",  str);
				break;
			default:
				pass = 0;
				break;
		}

		if (format[i + 1] && pass)
			printf(", ");

		i++;
	}

	va_end(print);

	printf("\n");
}
