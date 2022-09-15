#include "main.h"

/**
 * print_line - entry point
 * draw a straight line in the terminal
 * @n: the number of underscore characters
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
