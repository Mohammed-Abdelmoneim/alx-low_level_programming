#include <stdio.h>
/**
 * main - prints the alphabet
 *
 * Return: 0 with print fuction
 */
int main(void)
{
	char l;
	char a;

	for (l = '1'; l <= '9'; l++)
	{
		putchar(l);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}

