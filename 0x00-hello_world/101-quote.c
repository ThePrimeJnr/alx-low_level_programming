#include <unistd.h>

/**
 * main - A program prints a specific quote to the standard error.
 *
 * Description:	This C program prints the quote
 *		"and that piece of art is useful\" - Dora Korpar, 2015-10-19"
 *              followed by a new line, to the standard error
 *              using the write system call.
 *
 * Return: Always 1 (Error).
 *
 * Author: Destiny Saturday (DestinedCodes)
 * Date: 16-02-2023
 */
int main(void)
{
	/* Use the write system call to print the quote to the standard error.*/
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}

