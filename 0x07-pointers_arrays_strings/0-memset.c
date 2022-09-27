#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: Pointer to a memory
 * @b: Value that is to fill up memory
 * @n: number of bytes of memory
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
