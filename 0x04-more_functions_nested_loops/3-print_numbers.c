#include "main.h"
#include <ctype.h>

/**
 * print_numbers - prints numbers from 0 to 9
 */
void print_numbers(void)
{
	int i;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
