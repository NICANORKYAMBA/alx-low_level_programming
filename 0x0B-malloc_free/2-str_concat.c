#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The string destination
 * @s2: The string source to be concatenated
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */


char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, x;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		x++;
	}

	ptr = malloc((x + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		ptr[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		ptr[j++] = s2[i];
	}
	ptr[x] = '\0';

	return (ptr);
	free(ptr);
}
