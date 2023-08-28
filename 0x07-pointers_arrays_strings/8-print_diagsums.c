#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 *
 * @a: the array
 * @size: array size
 *
 * Return: 0 success
 */

void print_diagsums(int *a, int size)
{
	int i, mainSum = 0, antiSum = 0;

	for (i = 0; i < size; i++)
	{
		mainSum += a[i * size + i];
		antiSum += a[i * size + size - 1 - i];
	}
	printf("%d, %d\n", mainSum, antiSum);
}

