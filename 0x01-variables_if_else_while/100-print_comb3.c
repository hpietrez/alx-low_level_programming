#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * Description:  print all possible different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int a;
	int b = 0;

	while (b < 10)
	{
		a = 0;
		while (a < 10)
		{
			if (b != a && b < a)
			{
				putchar('0' + b);
				putchar('0' + a);

				if (a + b != 17)
				{
				putchar(',');
				putchar(' ');
				}
			}
			a++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}

