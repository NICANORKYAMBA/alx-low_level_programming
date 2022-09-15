#include "main.h"
/**
* print_square - prints a square
* @size: size of square
*
*/
void print_square(int size)
{
	int a, c;

	c = 0;

	if (size < 1)
		_putchar('\n');

	while (c < size)
	{
		a = 0;
		while (a < size)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		c++;
	}
}
