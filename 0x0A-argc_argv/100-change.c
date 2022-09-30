#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 * make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on sucess, otherwise return 1.
 */

int main(int argc, char *argv[])
{
	int result, amount, cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	result = 0;
	amount  = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	while (amount)
	{
		if (amount >= 25)
		{
			cent = 25;
		}
		else if (amount >= 10)
		{
			cent = 10;
		}
		else if (amount >= 5)
		{
			cent = 5;
		}
		else if (amount >= 2)
		{
			cent = 2;
		}
		else
		{
			cent = 1;
		}
		result += amount / cent;
		amount %= cent;
	}
	printf("%d\n", result);
	return (0);
}
