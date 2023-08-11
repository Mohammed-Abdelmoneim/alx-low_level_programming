#include <stdio.h>
/**
 * main - prints the alphabet and lower and UPPER case
 *
 * Return: 0 with print fuction
 */
int main(void)
{
	char lower;
	char upper;

	for (lower = 'a', upper = 'A'; lower <= 'z' && upper <= 'Z'; lower++, upper++)
	{
		putchar(lower);
		putchar(upper);
	}

	putchar('\n');
	return (0);
}

