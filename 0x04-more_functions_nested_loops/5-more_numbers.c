#include "main.h"
#include <ctype.h>

/**
 * more_numbers - prints numbers from 0 to 14
 */
void more_numbers(void)
{
	int i, j;

	while (i <= 9)
	{
		j = 0;

		while (j <= 14)
		{
			if (j < 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
