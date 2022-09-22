#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l1, i;

	l1 = strlen(dest);
	n  = strlen(src); 

	for (i = 0; src[i] && i <= n; i++)
	{
		dest[l1 + i] = src[i];
	}
	return (dest);
}
