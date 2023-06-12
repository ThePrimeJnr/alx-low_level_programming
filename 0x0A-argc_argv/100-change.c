#include "main.h"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

      	printf("Cents: %d", atoi(argv[1]));

	return (0);
}
