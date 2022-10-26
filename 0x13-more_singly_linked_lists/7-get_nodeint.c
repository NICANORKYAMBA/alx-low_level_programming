#include "lists.h"
/**
 * get_nodeint_at_index - gets node at nth position
 *
 * @head: pointer to listint_t
 * @index: position of the node to return
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int temp = 0;

	while (temp != index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		temp++;
	}
	return (head);
}
