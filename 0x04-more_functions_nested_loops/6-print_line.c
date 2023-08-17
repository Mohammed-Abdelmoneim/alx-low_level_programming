#include "main.h"

/**
 * print_line - print _ based on n number
 * @n: first param
 */
void print_line(int n)
{
	int i;

	while (i < n)
	{
		if (i == 0)
			_putchar('\n');
		else
			_putchar('_') * n;
		i++;
	}
}
