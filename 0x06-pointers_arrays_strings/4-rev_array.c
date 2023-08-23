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
	int i;

	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = n - 1; i > 0; i--)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[0]);
	}
}

