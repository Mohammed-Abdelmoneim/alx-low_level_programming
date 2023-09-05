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
s = strdup(str);

if (s == NULL)
{
printf("failed to allocate memory\n");
}

return (s);
}
