#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to the duplicated string
 * @str: the string to duplicate
 * Return: duplicate string or NULL for insufficient memory
 */

char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}
