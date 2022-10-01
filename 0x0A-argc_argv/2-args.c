#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all arguments it receives.
 *
 * @argc: the number of arguments
 * @argv:arguments passed to the program
 * Return: int
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	return (0);
}
