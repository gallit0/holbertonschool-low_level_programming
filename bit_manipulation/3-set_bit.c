#include "main.h"

/**
 * set_bit - set a bit at index to 1
 * @n: number
 * @index: index of bit
 * Return: number
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int result = 1;

	if (index >= 32)
		return (-1);

	result <<= index;
	return (result + (*n));
}
