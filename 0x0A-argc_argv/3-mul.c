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
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int sum = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", sum);
	}
	return (0);
}

