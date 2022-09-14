#include "main.h"

/**
 * _isalpha - entry point
 * Description: check for alphabetic character
 * @c: character to be checked
 * Return: 1 (if c is lowercase or uppercase) or 1 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
