#include "main.h"

/**
 * power - power of x to y
 * @x: un int
 * @y: un int
 * Return:result
 */

unsigned int power(unsigned int x, unsigned int y)
{
	if (y == 0)
		return (1);
	return (x * power(x, y - 1));
}

/**
 * binary_to_uint - convert a binary number to unsigned
 * @b: number in binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j;
	unsigned int n = 0;

	if (!b)
		return (0);
	j = strlen(b);
	for (i = 0; b[i]; i++, j--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			n += power(2, j);
		}
	}
	return (n);
}
