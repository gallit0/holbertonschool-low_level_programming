#include "main.h"

/**
 * binary_to_uint - convert a binary number to unsigned
 * @b: number in binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i, n;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
	}

	n = atoi(b);

	
}
