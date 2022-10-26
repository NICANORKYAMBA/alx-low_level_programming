#include "lists.h"



listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;

	unsigned int count;

	count = 0;

	if (head == NULL)
		return (NULL);
	
	temp = *head;

	if (temp == NULL && idx != 0)
		return (NULL);

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}

	while (count != idx - 1)
	{
		newnode = newnode->next;
		if (newnode == NULL)
		{
			free(temp);
			return (NULL);
		}
		count++;
	}
	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
