#include "3-calc.h"

/**
 * get_op_func - gets the operation to perform
 *
 * @s: operator sign
 *
 * Return: pointer to the operation
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (!strcmp(s, ops[i].op))
		{
			return (ops[i].f);
		}

		i++;
	}

	printf("Error\n");
	exit(99);
}
