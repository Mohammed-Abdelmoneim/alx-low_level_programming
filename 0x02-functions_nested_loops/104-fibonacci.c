#include <stdio.h>
/**
 * main - Print the first 50 fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0
 */
int main(void)
{
	int count = 3;

	long int first = 1, second = 2;
	long int next = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);
	while (count <= 98)
	{
		if (count == 98)
		{
			printf("%lu\n", next);
		}
		else
		{
			printf("%lu, ", next);
		}
		first = second;

		second = next;

		next = first + second;
		count++;
	}
	return (0);
}
