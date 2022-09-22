#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @str: string to capitalize
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) = *(str + i) - 32;
		}
		i++;
	}
	return (str);
}
