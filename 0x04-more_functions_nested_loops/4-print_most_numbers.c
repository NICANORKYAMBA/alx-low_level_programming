#include "main.h"
/**
* print_most_numbers - prints the numbers
* Return: Always 0 (success)
*/
void print_most_numbers(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		if (c != 2 && c != 4)
			_putchar(c + '0');

		c++;
	}
	_putchar('\n');
}
