#include <stdio.h>
/**
 * main - prints the alphabet
 *
 * Return: 0 with print fuction
 */
int main(void)
{
	int l;

	for (l = '0'; l <= '9'; l++)
	{
		putchar(l);
		if (l != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

