#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the string
 * Return: string length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	return (length);
}
