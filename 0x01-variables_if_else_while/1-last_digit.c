#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored
 * in the variable n
 *
 * Return: if n > 5 print n and greater then 5
 * if n equal to 0 print n and is 0
 * if n less than 6 and not 0 print n and is less than 6 and not 0
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	else if (lastDigit < 6 && lastDigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	return (0);
}
