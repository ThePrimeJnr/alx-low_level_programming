#include "3-calc.h"

/**
 * op_add - adds two integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subracts two integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: Difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: Product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: Quotient
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);

	printf("Error\n");
	exit(100);
}

/**
 * op_mod - modulus two integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: Remainder
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);

	printf("Error\n");
	exit(100);
}
