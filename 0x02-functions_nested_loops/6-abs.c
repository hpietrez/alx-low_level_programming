#include "main.h"

/**
 * _abs - entry point
 * Description: compute the absolute value of an integer
 * @i: integer from which to compute absolute value
 * Return: absolute value
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = (i * -1);
	}
	return (i);
}
