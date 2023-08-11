#include <stdio.h>
/**
 * main - prints the alphabet
 *
 * Return: 0 with print fuction
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}

	putchar('\n');
	return (0);
}

