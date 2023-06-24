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
	char s, *str;
	unsigned int i;
	va_list print;

	str = (char *)(malloc(sizeof(format)));

	i = 0;
	while (i < 4)
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
		printf("%c\n", format[i]);
		i++;
	}
	exit(98);

	i = 0;
	va_start(print, format);

	while (i < strlen(format))
	{
		if (str[i] == 'c' || str[i] == 'i' || str[i] == 'f' || str[i] == 's')
		{
			s = str[i];
			get_spec(s)(va_arg(print, char *));
		}
	}

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
