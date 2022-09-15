#include "main.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14
* @a: parameter 1
* @b: parameter 2
* Return: Always 0 (success)
*/
void more_numbers(void)
{
	int a;
	int b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			_putchar(b);
		}
		_putchar(a);
		_putchar('\n');
	}
}
