#include "main.h"

/**
 * _isupper - entry point
 * check for upppercase character
 * @c: character to be checked
 * Return: 1 if c uppercase or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
