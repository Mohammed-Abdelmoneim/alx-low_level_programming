#include <stdio.h>
/**
 * main - Print the first 50 fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0
 */
int main(void)
{
	int count = 3;

	long int first = 0, second = 0;
	long int next = first + second, sum;

	while (count <= 50000)
	{
		sum += count;
		if (sum < 4613732)
		{
			sum += count;
			sum++;
		}
		else
		{
			break;
		}
		first = second;

		second = next;

		next = first + second;
		count++;
	}
	printf("%lu\n", sum - 2311);
	return (0);
}
