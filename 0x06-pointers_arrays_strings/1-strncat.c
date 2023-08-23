#include "main.h"
#include <string.h>
/**
 * _stnrcat - concatenates two strings
 * @src: the concat src
 * @dest: the concat dest
 * @n: it will use at most n bytes from src 
 *
 * Return: the concat result
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

