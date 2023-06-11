#include "main.h"

int main(int argc, int *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return(1);
	}
	else
	{
		int mul;
		mul = *argv[1] * *argv[2];
		printf("%d\n", mul);
	}
}
