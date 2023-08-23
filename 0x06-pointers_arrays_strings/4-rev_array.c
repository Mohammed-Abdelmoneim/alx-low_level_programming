#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * reverse_array - reverses an array or numbers
 * @a: first param
 * @n: second param
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

