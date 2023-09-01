#include <stdio.h>
#include "main.h"
/**
 * main - program that prints its name, followed by a new line
 * @argc: number of string passed
 * @argv: string of array
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (argc - 1);
}

