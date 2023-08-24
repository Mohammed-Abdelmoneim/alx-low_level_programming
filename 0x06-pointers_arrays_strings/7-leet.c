#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * leet - concatenates two strings
 * @str: the string
 *
 * Return: the leet result
 */
char *leet(char *str)
{
	char *s = str;
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (tolower(str[i]) == 'a')
		{
			str[i] = '4';
		}
		else if (tolower(str[i]) == 'e')
		{
			str[i] = '3';
		}
		else if (tolower(str[i]) == 'l')
		{
			str[i] = '1';
		}
		else if (tolower(str[i]) == 't')
		{
			str[i] = '7';
		}
		else if (tolower(str[i]) == 'o')
		{
			str[i] = '0';
		}
	}
	return (s);
}
