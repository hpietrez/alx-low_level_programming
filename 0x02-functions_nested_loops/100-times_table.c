#include "main.h"

/**
 * print_times_table - entry point
 * Description: print the n times table
 * @n: number of times table
 * Return: void
 */

void print_times_table(int n)
{
	int a, b, mply;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				mply = a * b;
				_putchar(44);
				_putchar(32);
				if (mply <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(mply + 48);
				}
				else if (mply <= 99)
				{
					_putchar(32);
					_putchar((mply / 10) + 48);
					_putchar((mply % 10) + 48);
				}
				else
				{
					_putchar(((mply / 100) % 10) + 48);
					_putchar(((mply / 10) % 10) + 48);
					_putchar((mply % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
