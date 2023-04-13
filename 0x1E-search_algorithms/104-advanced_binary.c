#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers
 *                   using the binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the index where value is located, otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int mid, result;
	size_t i;

	if (!array || !size)
		return (-1);

	mid = (size - 1) / 2;

	printf("Searching in array: ");

	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		else
			return (advanced_binary(array, mid + 1, value));
	}
	if (array[mid] > value)
	{
		return (advanced_binary(array, mid, value));
	}
	else
	{
		result = advanced_binary(array + mid + 1, size - mid - 1, value);
		if (result == -1)
			return (-1);
		else
			return (result + mid + 1);
	}
}
