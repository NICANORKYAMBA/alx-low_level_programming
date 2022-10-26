#include "lists.h"
/**
 * print_listint - prints all the elements of listint_t list
 *
 * @h: pointer to listint_t list
 * Return: Number of elements in listint_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t n;

	if (h == NULL)
		return (0);

	n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
