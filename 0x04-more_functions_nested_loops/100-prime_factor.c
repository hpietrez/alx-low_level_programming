#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * find and print the largest prime factor of the number 612852475143
 * Return: 0
 */

int main(void)
{
	long a, b;

	a = 612852475143;

	for (b = 2; a > b; b++)
	{
		if (a % b == 0)
		{
			a = a / b;
		}
	}
	printf("%ld\n", b);
	return (0);
}
