#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: number of string passed
 * @argv: string of array
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

