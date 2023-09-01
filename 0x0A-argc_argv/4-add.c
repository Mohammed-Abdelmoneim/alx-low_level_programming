#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - adds positive numbers
 * @argc: number of string passed
 * @argv: string of array
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		int i, sum = 0;

		for (i = 1; i < argc; i++)
		{
			char *arg = argv[i];
			int j;

			for (j = 0; arg[j] != '\0'; j++)	
			{
				if (isalpha(arg[j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

