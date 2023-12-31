#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the nunber in decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		res = res << 1;

		if (b[i] == '1')
		{
			res = res | 1;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
	}

	return (res);
}
