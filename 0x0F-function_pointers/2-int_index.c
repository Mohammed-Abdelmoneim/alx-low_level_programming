#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - a function that searches for an integer.
 * @array: the array given
 * @size: the size of the array
 * @cmp: the function to be used to compare values
 *
 * Return: 0 success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (!array || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		res = (*cmp)(array[i]);
		if (res != 0)
			return (i);
	}
	return (-1);
	return (i);
}
