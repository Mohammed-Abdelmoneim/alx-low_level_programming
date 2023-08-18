#include "main.h"
#include <ctype.h>

/**
 * print_number - print an integer
 * @n: first param
 *
 * Return: 0
 */
void  print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10 > 0)
	{
		printInteger(n / 10);
	}
	putchar(n % 10 + '0');
}
