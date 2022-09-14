#include "main.h"

/**
 * print_last_digit - entry point
 * Description: print the last digit of a number
 * @n: number to be checked
 * Return: last
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = (n % 10) * -1;
	}
	else
	{
		last = n % 10;
	}
	_putchar(last + '0');
	return (last);
}
