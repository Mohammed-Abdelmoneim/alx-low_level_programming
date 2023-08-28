#include "main.h"
#include <string.h>
/**
 * _memcpy - function that copies memory area.
 * @dest: pointer to the destination array where the content is to be copied
 * @src: pointer to the source of data to be copied
 * @n: the number of bytes to be copied
 *
 * Return: 0 success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}

