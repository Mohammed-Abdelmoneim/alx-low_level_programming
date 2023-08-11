#include <stdio.h>
/**
* main - prints all possible different combinations of three digits.
*
* Return: 0 and print function
*/
int main(void)
{
	int i;
	int l;
	int t;

	for (i = '0'; i <= '9'; i++)
	{
		for (l = '0'; l <= '9'; l++)
		{
			for (t = '0'; t <= '9'; t++)
			{
				if ((i != l && l != t && i != t) && (l < t) && (i < l))
				{
					putchar(i);
					putchar(l);
					putchar(t);
					if (i != '7' || l != '8' || t != '9')
					{
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

