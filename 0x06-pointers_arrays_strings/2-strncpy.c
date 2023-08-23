#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string.
 * @src: the src
 * @dest: the dest
 * @n: The number of characters to be copied
 *
 * Return: the result
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

