#include "lists.h"
/**
 * pop_listint - deletes the head node of listint_t list
 *
 * @head: pointer to listint_t list
 * Return: the data stored in the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	unsigned int k;

	temp = *head;

	if (temp == NULL)
		return (0);

	k = temp->n;

	*head = temp->next;
	free(temp);

	return (k);
}
