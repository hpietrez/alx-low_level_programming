#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 * Description: Get a random, check its last digit
 * compare last digit with 5
 * Return: 0
 */

int main(void)
{
	int n;
	int lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastNum = n % 10;

	if (lastNum > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
	else if (lastNum == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastNum);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
	return (0);
}
