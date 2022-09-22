#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to the array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int *b = a;
	int *c = a + n -1;
	int tmp;

	while (b < c)
	{
		tmp = *b;
		*b = *c;
		*c = tmp;

		b++;
		c--;
	}
}
