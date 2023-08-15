#include "main.h"
#include <ctype.h>
/**
 * _islower - prints 1 if c is lowercase else prints 0
 * @c: first operand
 *
 * Return: 1 if c is lowercar 0 if else
 */
int _islower(int c)
{
	if (islower(c) != 0)
		_putchar('1');
	else
		_putchar('0');
}
