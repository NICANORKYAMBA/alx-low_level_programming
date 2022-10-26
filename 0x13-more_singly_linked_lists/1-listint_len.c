#include "lists.h"
/**
 * listint_len - returns the number of elements in listint_t list
 *
 * @h: pointer to listint_t list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	if (h == NULL)
		return (0);

	n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
