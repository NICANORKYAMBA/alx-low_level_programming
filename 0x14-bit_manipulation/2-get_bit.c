#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer number.
 * @index: the position of the bit.
 *
 * Return: value of the bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int counter;

	if (index > 63)
		return (-1);

	for (counter = 0; counter < index; counter++)
		n >>= 1;

	return (n & 1);
}
