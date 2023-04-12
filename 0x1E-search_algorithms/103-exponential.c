#include "search_algos.h"

int my_binary_search(int *array, int left, int right, int value);

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if it's not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, low, high;

	if (!array)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}

	low = i / 2;
	high = (i < size ? i : size) - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (my_binary_search(array, low, high, value));
}

/**
 * my_binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @left: The leftmost index to start searching from.
 * @right: The rightmost index to start searching from.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if it's not found.
 */
int my_binary_search(int *array, int left, int right, int value)
{
	int mid;

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (; left <= right; left++)
			printf("%d%s", array[left], left == right ? "\n" : ", ");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return (-1);
}
