#include "main.h"
#include <string.h>
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the main C string to be scanned
 * @accept: This is the C string containing the characters to match
 *
 * Return: 0 success
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

