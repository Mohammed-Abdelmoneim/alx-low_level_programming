#include "main.h"
/**
 * rev_string - print a sting in reverse
 * @s: first param
 */
void rev_string(char *s)
{
	int l, i;
	char *begin, *end, ch;

	l = strlen(s);
	begin = s;
	end = s + l - 1;

	for (i = 0; i < (l + 1) / 2; i++)
	{
		ch = *end;
		*end = *begin;
		*begin = ch;

		begin++;
		end--;
	}
}

