#include "lists.h"


/**
 * list_len - returns the number of elements in
 * a linked list_t list
 * @h: linked list
 *
 * Return: 0 success
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	list_t const *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
