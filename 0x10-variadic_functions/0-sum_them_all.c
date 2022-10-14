#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n:number of arguments
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argptr;
	unsigned int i, sum = 0;

	va_start(argptr, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(argptr, unsigned int);
	return (sum);

	va_end(argptr);
}
