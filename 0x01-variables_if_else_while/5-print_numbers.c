#include <stdio.h>

/**
 * main - entry point
 * Description: Print all single digit of base 10
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	putchar('\n');
	return (0);
}
