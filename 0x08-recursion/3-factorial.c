#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a given number
 * @n: first param
 *
 * Return: 0 success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

