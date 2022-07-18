#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 * @n: number
 * @index: position
 * Return: number
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp = 1;

	if (index >= 32)
		return (-1);

	temp <<= index;
	(*n) -= temp;
	return (1);
}
