#include "main.h"
#include <string.h>
/**
 * _strstr - function that locates a substring.
 * @s: This is the main C string to be scanned.
 * @accept: the small string to be searched with-in haystack string.
 *
 * Return: 0 success
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

