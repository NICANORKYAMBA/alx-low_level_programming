#include "main.h"
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
	unsigned int length1, length2, len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (length1 = 0; s1[length1]; length1++)
		len1++;
	for (length2 = 0; s2[length2]; length2++)
		len2++;
	if (n >= len2)
	{
		n = len2;
		ptr = malloc((len1 + len2 + 1) * sizeof(char));
	}
	else
		ptr = malloc((len1 + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		ptr[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		ptr[i] = *s2;
		s2++;
		i++;
	}

	ptr[i] = '\0';

	return (ptr);
}
