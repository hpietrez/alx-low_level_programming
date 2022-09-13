#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Description: print the alphabet ten times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		char alp;

		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
