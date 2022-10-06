#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_calloc - function to allocates memory
 * @nmemb: number of elements of an array of integers
 * @size: size in bytes
 * Return: return pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	unsigned int memorysize;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	memorysize = nmemb * size;

	i = 0;

	while (i < memorysize)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
