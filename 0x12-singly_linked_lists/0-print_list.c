#include "lists.h"


/**
 * print_list - that prints all the elements of a list_t list
 * a linked list_t list
 * @h: linked list
 *
 * Return: 0 success
*/
size_t print_list(const list_t *h)
{
	int count = 0;

	const list_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (count);
}
