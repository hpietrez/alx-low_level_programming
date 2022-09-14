#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: compute and print multiples of 3 or 5
 * Return: 0
 */

int main(void)
{
	int a = 0;
	int sum = 0;

	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum += a;
		}
		a++;
	}
	printf("%i\n", sum);
	return (0);
}
