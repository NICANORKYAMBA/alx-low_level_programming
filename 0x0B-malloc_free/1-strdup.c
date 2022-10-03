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
	
	for (x = 0; str[x]; x++)
	{
		y++;
	}
	ptr = (char *)malloc(y * sizeof(char));
	
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x]; x++)
	{
		ptr[x] = str[x];
	}
	ptr[y] = '\0';

	return (ptr);
	free(ptr);
}
