#include <stdio.h>
/**
* main - print this  all possible combinations of two two-digit numbers
*
* Return: 0 and print function
*/
int main(void)
{
	int i;
	int l;
	int t;
	int r;

	for (i = '0'; i <= '9'; i++)
	{
		for (l = '0'; l <= '9'; l++)
		{
			for (t = '0'; t <= '9'; t++)
			{
				for (r = '1'; r <= '9'; r++)
				{
					if (i == l || l == t)
					{
						putchar(i);
						putchar(l);
						putchar(' ');
						putchar(t);
						putchar(r);
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

