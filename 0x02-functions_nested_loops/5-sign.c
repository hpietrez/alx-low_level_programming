#include "main.h"

/**
 * print_sign - entry point
 * Description: print the sign of a number
 * @n: number to be checked
 * Return: 1 (greater than zero) or 0 (equalsto zero) or -1 (less than zero)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
