#include "main.h"

/**
 * print_line - print _ based on n number
 * @n: first param
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		while (i <= n)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
