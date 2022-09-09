#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: print all the numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	num = 'a';
	while (num <= 'f')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
