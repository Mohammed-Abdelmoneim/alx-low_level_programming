#include "main.h"
#include <stdio.h>
/**
 * main - prints time table
 *
 * Return: 0
*/
void times_table(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			int sum = i * n;

			printf("%2d, ", sum);
		}
		printf("\n");
	}
}
