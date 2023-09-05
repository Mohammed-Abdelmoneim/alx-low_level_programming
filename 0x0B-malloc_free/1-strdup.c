#include "main.h"
#include <string.h>

/**
 * create_array - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string
 * given as a parameter.
 *@size: size of the array
 *@c: array
 *
 * Return: 0 success
 */
char *_strdup(char *str)
{

char *s;
s = malloc(strlen(str) + 1 * sizeof(char));
if (s == NULL)
{
return (NULL);
}
strcpy(s, str);
return (s);
}
