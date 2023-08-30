#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: first param
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	p(s + 1);
	putchar(*s);
}

