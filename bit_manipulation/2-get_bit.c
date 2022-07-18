#include "main.h"

/**
 * get_bit - return value of bit
 * @n: number
 * @index: position of bit
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;
	return (n % 2);
}
