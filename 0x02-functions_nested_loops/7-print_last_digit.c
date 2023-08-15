#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a given number
 * @n: the nunber
 *
 * Return: the value of r
 */
int print_last_digit(int n)
{
	int a = abs(n);
	int last = a % 10;

	if (last < 0)
		last = -last;
	_putchar(last + '0');
	return (last);
}
