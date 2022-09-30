#include "main.h"

/**
 * _islower - entry point
 * Description: check for lowercase character
 * @c: value to be compared
 * Return: 1 if lowecase otherwise 0
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
