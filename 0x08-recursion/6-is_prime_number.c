#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * is_prime - helper func
 * @n: param
 * @check: param
 *
 * Return: 0 success
 */
int is_prime(int n, int check)
{
	if (check <= n)
	{
		if (n % check == 0)
			is_prime(n, check++);
		else
			return (1);
	}
	else
		return (0);
}
/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 *
 * @n: first param
 *
 * Return: 0 success
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2 || n == 3)
		return (1);
	is_prime(n / 2, 4);
}

