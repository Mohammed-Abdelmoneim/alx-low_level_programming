#include "main.h"
#include <string.h>
/**
 * _strchr - a function that locates a character in a string.
 * @s: the C string to be scanned.
 * @c: the character to be searched in s
 *
 * Return: 0 success
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}

