#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * string_toupper - converts a string to uppercase
 * @str: target string
 *
 * Return: string all in upper
 */
char  *string_toupper(char *str)
{
	char *s = str;

	while (*str != '\0')
	{
		*str = toupper(*str);
		str++;
	}
	return (s);
}

