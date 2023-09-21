#include "lists.h"


/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head
 * @str: string to be add
 *
 * Return: 0 success
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	if (!head)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}
	temp = *head;

	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
