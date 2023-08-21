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

	if (len % 2 != 0)
	{
		halflen = len - 1 / 2;
		for (i = l2; i < len; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		for (i = halflen; i < len; i++)
		{
			_putchar(*(str + i));
		}
	}


	for (i = halflen; i < len; i++)
	{
		_putchar(*(str + i));
		if (len % 2 != 0)
		{
			halflen = len - 1;

			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}

