#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - print the hole day in mins and secs
 */
void jack_bauer(void)
{
	int i, j, r, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (r = 0; r <= 5; r++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(r + '0');
					_putchar(l + '0');
					if ((i != 2 || j != 3) || (r != 5 || l != 9))
						_putchar('\n');
				}
			}
		}
	}
}
