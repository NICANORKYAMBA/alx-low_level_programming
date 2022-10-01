#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the number of arguments passed into it.
 *
 * @argc: number of arguments
 * @argv: arguments
 * @__attribute__((unused)): unused variable
 * Return: int
 */

int main(int argc, char **argv __attribute__((unused)))
{
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
