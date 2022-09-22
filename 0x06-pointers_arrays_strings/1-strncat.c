#include "main.h"

/**
 * _strncat - Concatenates two strings using n bytes
 * @dest: Destination String
 * @src: Source string
 * @n: Number of bytes of src that should be concatenated with dest
 * Return: Pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0' && n != j)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
