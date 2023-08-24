#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * cap_string - capitalizes all the words
 * @str: string to be capitalized
 *
 * Return: the capitalized string
 */
char *cap_string(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (isalpha(str[i]) && !isalpha(str[i - 1]))
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);

}

