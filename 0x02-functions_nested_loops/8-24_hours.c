#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - print the hole day in mins and secs
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;

	while (i <= 23)
	{
		j = 0;

		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
