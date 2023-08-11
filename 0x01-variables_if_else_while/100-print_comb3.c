#include <stdio.h>
/**
* main - prints the alphabet
*
* Return: 0 with print fuction
*/
int main(void)
{

	int i;
	int l;

	for (i = '0'; i <= '9'; i++)
	{

		for (l = '0'; l <= '9'; l++)
		{
			if (i != l && (i < l))
			{
				putchar(i);
				putchar(l);
				if (i != '8' || l != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
