#include "main.h"
#include <string.h>

/**
 * str_concat -  concatenates two strings.
 *@s1: first string
 *@s2: second string
 *
 * Return: 0 success
 */
char *str_concat(char *s1, char *s2)
{

int len;
char *res;

if (s2 == NULL)
{
s2 = (char *)malloc(1);
s2[0] = '\0';
}

if (s1 == NULL)
{
s1 = malloc(1);
s1[0] = '\0';
}

len = strlen(s1) + strlen(s2) + 1;
res = (char *)malloc(len);

if (res == NULL)
{
return (NULL);
}

strcpy(res, s1);
strcat(res, s2);

return (res);
}
