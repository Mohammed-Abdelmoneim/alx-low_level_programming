#include "main.h"

/**
 * print_diagonal - print _ based on n number
 * @n: first param
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		
		for (i = 0; i <= n - 1; i++)
		{
			int s = 1;

			while (s <= i)
			{
				_putchar(' ');
				s++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
