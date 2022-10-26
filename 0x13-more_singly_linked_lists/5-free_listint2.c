#include "lists.h"
/**
 * free_listint2 - frees listint_t list
 *
 * @head: pointer to listint_t list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL && head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
