#include "lists.h"
/**
 * list_len - returns number of elements in list_t list
 *
 * @h: the list in list_t
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
