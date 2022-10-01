#include <stdio.h>
/**
 * main - prints its name
 *
 * @__attribute__((unused)): unused variable
 * @argv: argument vector
 * @argc: number of arguments
 * Return: int
 */
int main(int argc __attribute__((unused)), char **argv)
{
printf("%s\n", *argv);
return (0);
}
