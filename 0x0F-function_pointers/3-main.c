#include "3-calc.h"

int main(int argc, char *argv)
{
	int a, b;

	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	get_op_func(s)(a, b);

	return (0);
}
