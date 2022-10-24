#include "lists.h"
/**
 * print_list - prints all the elements of list_t list
 * @h: the list_t list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *ptr = NULL;

	if (h == NULL)
		return (0);

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (0);

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);

		ptr = ptr->next;
		n++;
	}
	return (n);
}
