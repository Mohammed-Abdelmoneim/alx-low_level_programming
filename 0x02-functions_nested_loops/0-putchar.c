#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: 1 if true
 * 0 if false
 */
int main(void)
{
	int i = 0;
	char s[8] = "_putchar";

	while (i < 8)
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
