#include "main.h"

/**
 * get_bit - return value of bit
 * @n: number
 * @index: position of bit
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 9)
		return (-1);
	n = n >> index;
	return (n % 2);
}
