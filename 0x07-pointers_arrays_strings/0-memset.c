#include "main.h"
#include <string.h>
/**
 * _memset - a function that fills memory with a constant byte
 * @s: a pointer to the block of memory to fill
 * @b: the value to be set
 * @n: the number of bytes to be set to the value.
 *
 * Return: 0 success
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (0);
}

