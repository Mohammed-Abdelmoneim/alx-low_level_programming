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

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}

