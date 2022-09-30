#include "main.h"

/**
 * _strstr  - locates a substring
 * @needle: String to find
 * @haystack: String to search
 * Return: String
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
		{
			return (src);
		}
		haystack = src + 1;
	}
	return (0);
}
