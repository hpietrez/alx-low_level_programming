#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: printing alphabet in lower cases
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
