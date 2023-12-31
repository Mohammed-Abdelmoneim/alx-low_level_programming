#include "main.h"
#include <math.h>
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: base value
 * @y: power value
 *
 * Return: 0 success
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}

