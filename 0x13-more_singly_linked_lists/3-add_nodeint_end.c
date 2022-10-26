#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: pointer to listint_t list
 * @n: int to add to  the newnode
 * Return: newnode inserted at the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;

	return (newnode);
}
