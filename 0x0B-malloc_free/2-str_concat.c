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
int len = strlen(s1) + strlen(s2) + 1;
char *res = malloc(len);
  
strcpy(res, s1);
strcat(res, s2);

if (res == NULL)
{
return (NULL);
}
return res;
}
