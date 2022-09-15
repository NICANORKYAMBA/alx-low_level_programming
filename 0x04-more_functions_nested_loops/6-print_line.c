#include "main.h"
/**
* print_line - draws a straight line in the terminal
*
* @n: is the number of times the character _ should be printed
*
* Return: Always 0 (success)
*/
void print_line(int n)
{
	int a;

	a = 0;
	while (a < n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
