#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - Prints alphabet from a:z
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	putchar('\n');
}
