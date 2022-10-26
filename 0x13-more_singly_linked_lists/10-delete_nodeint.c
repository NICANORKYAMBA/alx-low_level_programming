#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at an a given index
 *
 * @head: a pointer to the head of the node
 * @index: the index at which the node is to be deleted
 * Return: 1 if succeeds and -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *previous;
	unsigned int count;

	if (head == NULL)
		return (-1);

	current = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}

	count = 0;

	while (count != index)
	{
		previous = current;
		current = current->next;

		if (current == NULL)
			return (-1);
		count++;
	}

	previous->next = current->next;
	free(current);
	current = NULL;
	return (1);
}
