#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: first param
 */
void _print_rev_recursion(char *s)
{
	int i;
	int l = strlen(s);

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
}

