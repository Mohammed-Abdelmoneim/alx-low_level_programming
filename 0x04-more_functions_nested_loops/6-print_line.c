#include "main.h"
#include <ctype.h>

/**
 * print_line - print _ based on n number
 */
void print_line(int n)
{
	int i = n;

	while (i < n)
	{
		if (i == 0)
			_putchar('\n');
		else
			_putchar('_') * n;
		i++;
	}
}
