#include "main.h"

/**
 * main - entry point
 * Description: print _putchar
 * Return: 0
 */

int main(void)
{
	int a = 0;
	char ch[] = "_putchar";

	while (a < 8)
	{
		_putchar(ch[a]);
		a++;
	}
	_putchar('\n');
	return (0);
}
