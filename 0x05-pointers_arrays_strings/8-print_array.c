#include "main.h"
#include <string.h>
/**
 * print_array - prints n elements of an array of integers,
 * @a: first param
 * @n: second param
 */
void print_array(int *a, int n)
{
	int arr[n];
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", *(a + i));
}

