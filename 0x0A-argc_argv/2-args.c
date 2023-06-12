#include "main.h"

/**
 * main -  prints each word in a sentence to a new line
 *
 * Return: Always 0, Success
 *
 * Author: Destiny Saturday (DestinedCodes)
 * Date: 12/06/2023
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
