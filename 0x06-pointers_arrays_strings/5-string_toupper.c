#include "main.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@str: string to change to uppercase from lowercase
 * Return: str
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
		{
			*(str + i) = *(str + i) - 32;
		}
		i++;
	}
	return (str);
}
