#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: The string to check
 * @c: The character to find
 * Return: *s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
