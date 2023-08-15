#include "main.h"
#include <stdio.h>
/**
 *  print_to_98 - print nums from 0 to 98
 * @n: first operand
 *
 * Return: the value of addition
 */
void print_to_98(int n)
{
	int t = n;

	if (t <= 98)
	{
		while (t <= 98)
		{
			printf("%d", t);
			if (t != 98)
				printf(", ");
			t++;
		}
	}
	else if (t >= 98)
	{
		while (t >= 98)
		{
			printf("%d\n", t);
			if (t != 98)
				printf(", ");
			t--;

		}
	}
	printf("\n");
}
