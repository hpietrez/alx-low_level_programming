#include "main.h"

/**
 * main - entry point
 * Description: print _putchar
 * Return: 0
 */

int main(void)
{
	int a = 0;
	char c [] = "_putchar";

	while (a < 8)
	{
		_putchar(c[a]);
		a++;
	}
	_putchar('\n');
	return (0);
}
