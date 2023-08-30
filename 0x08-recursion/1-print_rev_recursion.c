#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: first param
 */
void _print_rev_recursion(char *s)
{
	int i;
	int l = strlen(str);

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(*(str + i));
	}
}

