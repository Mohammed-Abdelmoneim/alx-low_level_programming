#include "lists.h"


/**
 * print_list - that prints all the elements of a list_t list
 * a linked list_t list
 * @h: linked list
 *
 * Return: 0 success
*/
list_t *add_node_end(list_t **head, const char *str)
{
  list_t *new;
  list_t *temp;

  if(!head)
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
