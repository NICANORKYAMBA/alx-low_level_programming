#include "main.h"

/**
* function checks the sign of a number
* returns 1 if positive
* returns 0 if zero
* returns -1 if negative
*/

int print_sign(int n)
/**
function checks for the sign of a number
*/
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
return (0);
}
