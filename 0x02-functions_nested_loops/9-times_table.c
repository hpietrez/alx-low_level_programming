#include "main.h"

/**
 * times_table - entry point
 * Description: print the 9 times table sarting with zero
 * Return: void
 */

void times_table(void)
{
	int num, mply, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mply = 1; mply <= 9; mply++)
		{
			_putchar(48);
			_putchar(' ');
			prod = (num * mply);
				if (prod <= 9)
					_putchar(' ');
				else
					_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
