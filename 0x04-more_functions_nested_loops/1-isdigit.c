#include "main.h"
#include <ctype.h>

/**
 * _isdigit - prints 1 if digit, 0 otherwise
 * @c: first param
 *
 * Return: 0
 */
int  _isdigit(int c)
{
	if (isdigit(c) != 0)
		return (1);
	else
		return (0);
	return (c);
}
