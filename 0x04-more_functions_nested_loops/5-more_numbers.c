#include "main.h"
#include <ctype.h>

/**
 * print_most_numbers - prints numbers from 0 to 9
 */
void more_numbers(void)
{
	int i, j;

	while (i <= 9)
	{
		j = 0;

		while (j <= 14)
		{
			if(j < 10)
			{
				_putchar((j % 10) + '0');
			}
			else if (j >= 10 && j != 0)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
