#include <stdio.h>

/**
 *  main - Our entry point
 *  Return: 0
 */

int main(void)
{
	char ch;
	int i;
	long lo;
	long long lolo;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(ch));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(lo));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lolo));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
