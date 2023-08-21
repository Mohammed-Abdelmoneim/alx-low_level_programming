#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * _atoi -  convert a string to an integer
 * @s: first param
 *
 * Return: 0 success
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = -1;
	int result = 0;

	while (s[i] != '\0' && !isdigit(s[i]))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] != '\0' && isdigit(s[i]))
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}
