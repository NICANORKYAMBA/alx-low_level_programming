#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 *
 * @argc: number of arguments
 * @argv:arguments passed to the program
 * Return:int
 */

int main(int argc, char **argv)
{
	int product;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	{
		printf("%d\n", product);
	}
	return (0);
}
