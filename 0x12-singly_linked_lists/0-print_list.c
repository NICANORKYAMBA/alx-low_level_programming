#include "lists.h"
/**
 * print_list - prints all the elements of list_t list
 * @h: the list_t list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int n;

	n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		n++;
		h = h->next;
	}
	return (n);
}
