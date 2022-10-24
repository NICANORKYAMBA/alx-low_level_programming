#include "lists.h"
#include <string.h>
/**
  * add_node_end - adds a node at the end of the list_t list.
  * @head: pointer to list_t list pointer.
  * @str: pointer to the string.
  *
  * Return: address of the new node, NULL otherwise.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	char *dup;
	unsigned int i;

	i = 0;

	new = malloc(sizeof(list_t *));

	if (new == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	dup = strdup(str);

	if (*head == NULL)
	{
		*head = new;
		new->len = i;
		new->str = dup;
		new->next = NULL;
		return (new);
	}
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	new->len = i;
	new->str = dup;
	new->next = NULL;

	return (new);
}
