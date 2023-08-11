#include <stdio.h>
/**
 * main - prints the numbers of base 10
 *
 * Return: 0 with print fuction
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

