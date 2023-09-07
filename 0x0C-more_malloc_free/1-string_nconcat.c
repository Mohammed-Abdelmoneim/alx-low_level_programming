#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * string_nconcat -  concatenates two strings.
 *@s1: first string
 *@s2: second string
 *@n: number
 *
 * Return: 0 success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len;

	str = malloc(n *  sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
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
	len = strlen(s2);
	if (len >= n)
	{
		strcpy(str, s1);
		strncat(str, s2, len);
	}
	else
	{
		strcpy(str, s1);
		strcat(str, s2);
	}
	return (str);
}
