#include "function_pointers.h"
/**
 * int_index - a function to search for an integer
 *
 *@array: array containing integers to search
 *@size:number of elements in the array
 *@cmp:a pointer to the function to be used to compare values
 * Return: the index of the first element for
 * which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != '\0')
				return (i);
		}
		if (size <= 0)
			return (-1);
	}
	return (-1);
}
