#include "main.h"

/**
 * main - calculates sum of two numbers
 * @argc: argument count
 * @argv: argument velocity
 *
 * Return: 0 - success, 1- fail
 *
 * Author: Destiny Saturday (DestinedCodes)
 * Date: 12/06/2023
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int mul, num1, num2;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}

	return (0);
}
