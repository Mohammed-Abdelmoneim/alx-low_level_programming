#include "main.h"
/**
 *  print_to_98 - print nums from 0 to 98
 * @n: first operand
 *
 * Return: the value of addition
 */

int print_to_98(int n)
{
	int r = n;

	while (r <= 98)
	{
		printf("%d, ", r);
		r++;
	}
	while (r >= 98)
	{
		printf("%d, ", r);
		r--;
	}

	return (r);
}
