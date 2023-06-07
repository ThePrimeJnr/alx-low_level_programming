# include "main.h"

/**
 * factorial - calculate the factorial of the gien number recurively
 * @n: The number whos factorial is calculated
 *
 * Return: error is -1, the respective value of the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
