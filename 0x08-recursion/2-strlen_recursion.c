#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * using recursion
 *
 *@s: string s
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
	}
	return (1 + _strlen_recursion(s));
}
