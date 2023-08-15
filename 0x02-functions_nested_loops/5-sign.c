#include "main.h"
/**
 * print_sign - prints the sign of the number
 * @n: first operand
 *
 * Return: 1 if number greater than 0, 0 if = 0, -1 if less then 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (0)
	}
}

