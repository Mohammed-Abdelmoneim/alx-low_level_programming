#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string, in reverse
 * @str: first param
 *
 * Return: 0 success
 */
void print_rev(char *str)
{
	int i;
	int l = strlen(str);

	for (i = l; i >= 0; i--)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

