#include "main.h"

/**
 * print_to_98 - entry point
 * Description: print all natural numbers from n to 98
 * @n: the input number
 * Return: 0
 */

void print_to_98(int n)
{

	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98\n");
}
