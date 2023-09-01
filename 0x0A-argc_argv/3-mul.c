#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies two numbers.
 * @argc: number of string passed
 * @argv: string of array
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

