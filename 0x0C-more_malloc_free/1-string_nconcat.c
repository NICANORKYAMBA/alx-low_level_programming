#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL,or if successful
 * a pointer to the concatenated strings in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int length1, length2;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (length1 = 0; s1[length1] != '\0'; length1++)
		;

	for (length2 = 0; s2[length2] != '\0'; length2++)
		;

	if (n >= length2)
	{
		n = length2;
	}
	ptr = malloc((length1 + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
	{
		ptr[i] = s1[i];
	}

	for (i = 0; i <= n; i++)
	{
		ptr[length1 + i] = s2[i];
	}

	ptr[length1 + n] = '\0';

	return (ptr);
}
