#include "main.h"
/**
 * leet - concatenates two strings
 * @str: the string
 *
 * Return: the leet result
 */
char *leet(char *str)
{
	int i, j;
	char *s = "aAeEoOtTlL";
	char *d = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == s[j])
			{
				str[i] = d[j];
			}
		}
	}
	return (str);
}
