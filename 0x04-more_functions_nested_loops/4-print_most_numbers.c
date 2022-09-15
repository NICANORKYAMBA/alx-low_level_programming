#include "main.h"
/**
* print_most_numbers - prints the numbers, from 0 to 9
*
* @c: parameter
* Return: Always 0 (success)
*/
void print_most_numbers(void)
{
	int c;
	for (c = 48; c <= 57; c++)
	{
		if (c != 52 && c != 50)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
