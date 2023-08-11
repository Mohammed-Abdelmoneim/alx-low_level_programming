#include <stdio.h>
/**
 * main - prints the alphabet except q and c
 *
 * Return: 0 with print fuction
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l)
			putchar(l);
		else if (l == 'q' || l == 'e')
			return (0);
	}

	putchar('\n');
	return (0);
}

