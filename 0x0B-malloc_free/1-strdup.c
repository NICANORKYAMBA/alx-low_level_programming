#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy a string to a newly allocated space in memory
 * @str: string to copy
 *
 * Return: pointer to duplicated string or NULL if error
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int x, y;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; str[x]; x++)
		{
			ptr = (char *)malloc(x * sizeof(char));
		}
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < x; y++)
	{
		ptr[y] = str[y];
	}
	return (ptr);
	free(ptr);
}
