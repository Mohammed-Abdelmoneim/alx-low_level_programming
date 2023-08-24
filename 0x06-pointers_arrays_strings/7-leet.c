#include "main.h"
/**
 * leet - concatenates two strings
 * @s: the string
 *
 * Return: the leet result
 */
char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		while (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = '4';
		}
		while (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = '3';
		}
		while (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = '0';
		}
		while (s[i] == 't' || s[i] == 'T')
		{
			s[i] = '7';
		}
		while (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = '1';
		}
	}
	return (s);
}
