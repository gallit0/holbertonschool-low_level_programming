#include "main.h"

/**
 * print_diagsums - print sum of two diagonals
 * @a: int
 * @size: int
 */

void print_diagsums((int *) a, int size)
{
	int i = 0;
	int j = size - 1;
	unsigned int result0 = 0;
	unsigned int result1 = 0;

	for (; i < size; i++)
	{
		j--;
	}
	printf("%d, %d\n", result0, result1);
}
