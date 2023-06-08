#include "main.h"

/**
 * _pow_recursion - calculate the power of a number to a degree
 * @x: The base number
 * @y: The power
 *
 * Return: Error is (-1), recursively calculates the power
 *
 * Author: Destiny Saturday (DestinedCodes)
 * Date: 08/06/2023
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
