#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:	This C program prints the sizes of various data types
 *		(char, int, long int, long long int, and float) in bytes.
 *
 * Return: Always 0 (Success)
 *
 * Author: Destiny Saturday (DestinedCodes)
 * Date: 16-05-2023
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}

