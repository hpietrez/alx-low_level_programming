#include "main.h"

/**
 * _isdigit - entry point
 * check for digits
 * @c: character to be checked
 * Return: 1 if digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
