#include "main.h"
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
					putchar(i + '0');
					putchar(j + '0');
					putchar(':');
					putchar(r + '0');
					putchar(l + '0');
					putchar('\n');
				}
			}
		}
	}
}
