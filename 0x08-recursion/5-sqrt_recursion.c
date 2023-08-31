#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to be checked
 *
 * Return: 0 success
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_func(n, 0));
}
/**
 * _sqrt_func - function will help me return the intended value
 * @nb: the number
 * @i: coutner
 *
 * Return: 0 success
 */
int _sqrt_func(int nb, int i)
{
	if (i * i == nb)
		return (nb);
	else if (i * i > nb)
		return (-1);
	else
		return (_sqrt_func(nb, i + 1));
}

