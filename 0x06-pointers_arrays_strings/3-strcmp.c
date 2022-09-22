#include "main.h"
#include <string.h>
/**
 * _strcmp - function that compares two strings.
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}
