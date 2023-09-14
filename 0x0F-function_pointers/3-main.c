#include "3-calc.h"

/**
 * main - make all together
 * @argc: number of args
 * @argv: args to be calc
 *
 * Return: result
*/

int main(int argc, char *argv[])
{
	char operator;
	int operand1;
	int operand2;
	int res;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operand1 = atoi(argv[1]);
	operand2 = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	operator = *argv[2];
	if ((operator == '/' || operator == '%') && operand2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = f(operand1, operand2);
	printf("%d\n", res);

	return (0);
}
