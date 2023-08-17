#include "main.h"
#include <ctype.h>

/**
 * _isupper - prints 1 if letter is uppercase, 0 otherwise
 * @c: first param
 *
 * Return: 0
 * */
int  _isupper(int c)
{
	if (isupper(c) != 0)
		return (1);
	else
		return (0);
	return (c);
}
