#include "variadic_functions.h"

void (*get_spec(char c))(char *)
{
	get_format format[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
	};

	int i;

	while (i < 3)
	{
		if (c == format[i].spec)
			return (format[i].print);

		i++;
	}

	exit(99);
}

void print_all(const char * const format, ...)
{
	unsigned int i;
	char *str;
	va_list print;

	i = 0;

	va_start(print, format);
	while (i < strlen(format))
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
		{
			str = va_arg(print, char *);
			printf("%c ", format[i]);
			printf("%s\n", str);
		}
		i++;
	}
	exit(98);



	va_end(print);

	printf("\n");
}

void print_char(char *s)
{
	printf("%s", s);
}

void print_int(char *s)
{
	printf("%s", s);
}

void print_float(char *s)
{
	printf("%s", s);
}

void print_str(char *s)
{
	printf("%s", s);
}
