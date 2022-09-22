#include "main.h"
#include <string.h>
/**
 * _strncpy - function that copies a string
 * @dest: destination of the copied characters
 * @src: source of the characters to be copied
 * @n: the number of strings to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{	
	int l1;
	
	l1 = strlen(src);

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	
	if (l1 <= n)
		*dest = *src;
	return (dest);
}
