#include "search_algos.h"

int advanced_binary_recursive(int *array, size_t size, int value);
int binary_search_recursive(int *array, size_t low, size_t high, int value);

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

	return (-1);
}

/**
 * binary_search_recursive - recursive helper function for binary search
 * @array: the array to search in
 * @low: the lower bound of the search range
 * @high: the upper bound of the search range
 * @value: the value to search for
 *
 * Return: the index where value is located, otherwise -1
 */
int binary_search_recursive(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i == high)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}

	i = (low + high) / 2;
	if (array[i] == value)
	{
		if (i == low || array[i - 1] != value)
			return (i);
		else
			return (binary_search_recursive(array, low, i, value));
	}
	else if (array[i] > value)
	{
		return (binary_search_recursive(array, low, i, value));
	}
	else
	{
		return (binary_search_recursive(array, i + 1, high, value));
	}
}

/**
 * advanced_binary_recursive - searches for a value in a
 *		sorted array of integers using the binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the index where value is located, otherwise -1
 */
int advanced_binary_recursive(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
