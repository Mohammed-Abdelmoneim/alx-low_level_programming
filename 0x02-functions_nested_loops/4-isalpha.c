#include "main.h"
#include <ctype.h>
/**
 * _isalpha - prints 1 if c is a letter else prints 0
 * @c: first operand
 *
 * Return: 1 if c is a letter 0 if else
 */
int _isalpha(int c)
{
	int r = isalpha(c);

	if (r != 0)
		return (1);
	else
		return (0);
	return (r);
}
