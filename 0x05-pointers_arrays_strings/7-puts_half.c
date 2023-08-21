#include "main.h"
#include <string.h>
/**
 * puts_half -  prints half of a string
 * @str: first param
 *
 * Return: 0 success
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int halflen = len / 2;

	for (i = halflen; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

