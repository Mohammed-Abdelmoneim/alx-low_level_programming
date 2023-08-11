#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print random number with string descriping
* the value of the number
*
* Return: if n is positive return is positive
*if n is equal zero return is zero
*if n is positive return is negative
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
