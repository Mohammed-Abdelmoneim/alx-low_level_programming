#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string
 * given as a parameter.
 *@str: the string to be copied
 *
 * Return: 0 success
 */
char *_strdup(char *str)
{

if (str == NULL)
{
return (NULL);
}
return (strdup(str));
}
