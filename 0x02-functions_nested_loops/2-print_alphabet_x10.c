#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	int lines = 0;

	while (lines < 10)
	{
		i = 97;
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		putchar('\n');
		lines++;
	}
}

