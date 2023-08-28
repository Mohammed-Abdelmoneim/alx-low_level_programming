#include "main.h"
#include <string.h>
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the main C string to be scanned.
 * @accept: string containing the list of characters to match in str1.
 *
 * Return: 0 success
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

