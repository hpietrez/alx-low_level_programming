#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: Source memory area
 * @dest: Destination memory area
 * @n: Number of bytes
 * Return: A pointer to destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
