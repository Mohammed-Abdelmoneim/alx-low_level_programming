#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - prints name!
 * @array: array given
 * @size: size of the array
 * @action: a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{	
		action(array[i]);
	}
}
