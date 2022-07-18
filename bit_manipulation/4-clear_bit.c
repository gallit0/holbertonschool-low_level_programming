#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 * @n: number
 * @index: position
 * Return: number
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	(*n) &= ~(1UL << index);
	return (1);
}
