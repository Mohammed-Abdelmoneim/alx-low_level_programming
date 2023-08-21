#include "main.h"
/**
 * swap_int - swaps two numbers
 * @a: first param
 * @b: second param
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

