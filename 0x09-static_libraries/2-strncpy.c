#include "main.h"

/**
 * _strncpy - function that copies a string
 * @src: source string
 * @dest: destination string
 * @n: number of bytes to be copied
 * Return: Destination pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
