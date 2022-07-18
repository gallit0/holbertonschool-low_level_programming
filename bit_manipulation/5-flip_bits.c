#include "main.h"

/**
 * flip_bits - returns the number of bits
 * @n: int
 * @m: int
 * Return: un int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int counter = 0;
	unsigned long int y = (n ^ m);

	while (y > 0)
	{
		counter++;
		y &= (y - 1);
	}
	return (counter);
}
