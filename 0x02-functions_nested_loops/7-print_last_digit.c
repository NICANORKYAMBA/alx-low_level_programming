#include "main.h"
/**
* print_last_digit - prints the last digit of a number.
*@j: number being tested
* Return: always 0.
*/
int print_last_digit(int j)
{
	j = j % 10;
	if (j < 0)
	{
		j = -j;
		_putchar (j + '0');
		return (j);
	}
return (0);
}
