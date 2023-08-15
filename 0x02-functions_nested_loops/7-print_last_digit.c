#include "main.h"
/**
 * print_last_digit - prints the last digit of a given number
 * @n: the nunber
 *
 * Return: the value of r
 */
int print_last_digit(int n)
{
	int r = n % 10;

	_putchar(r);
	return (r);
}
