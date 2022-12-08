#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts newnode at a given index
 * @h: pointer to pointer head
 * @idx: index at which to insert newnode
 * @n: data to store in the newnode
 *
 * Return: address of newnode; null if fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 1;
	dlistint_t *tmp = NULL, *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL || h == NULL)
		return (NULL);
	newnode->n = n;
	tmp = *h;
	if (idx == 0)
	{
		*h = newnode;
		newnode->next = tmp;
		newnode->prev = NULL;
		tmp->prev = newnode;
		return (newnode);
	}
	while (tmp->next != NULL)
	{
		if (count == idx)
		{
			newnode->prev = tmp;
			newnode->next = tmp->next;
			tmp->next = newnode;
			newnode->next->prev = newnode;
		}
		tmp = tmp->next;
		count++;
	}
	if (count == idx)
	{
		newnode->prev = tmp;
		newnode->next = NULL;
		tmp->next = newnode;
	}
	if (count < idx)
	{
		free(newnode);
		return (NULL);
	}
	return (newnode);
}
