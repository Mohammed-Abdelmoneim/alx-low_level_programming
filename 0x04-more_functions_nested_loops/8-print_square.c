#include "main.h"

/**
 * print_square -  that prints a square, followed by a new line.
 * @size: first param
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= size; i++)
		{
			int l;

			for (l = 1; l <= size; l++)
				_putchar('#');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
