#include "main.h"
#include <string.h>
/**
 * puts2 - prints a string,
 * @str: first param
 *
 * Return: 0 success
 */
void puts2(char *str)
{
	int i;
	int l = strlen(str);

	for (i = 0; i <= l; i = i + 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

