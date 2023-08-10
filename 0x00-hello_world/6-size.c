#include <stdio.h>
/**
 * main - prints the sizeof datatypes
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %lu\n", sizeof(c));
	printf("Size of an int: %lu\n", sizeof(i));
	printf("Size of a long int: %lu\n", sizeof(l));
	printf("Size of a long long int: %lu\n", sizeof(ll));
	printf("Size of a float: %lu\n", sizeof(f));
	return (0);
}
