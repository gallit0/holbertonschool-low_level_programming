#include "main.h"

/**
 * print_diagsums - print sum of two diagonals
 * @a: int
 * @size: int
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	unsigned int res0 = 0;
	unsigned int res1 = 0;

	for (; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				res0 = res0 + (*((int *)a + i * size + j));
			if (j == (size - 1 - i))
				sum2 = sum2 + (*((int *)a + i * size + j));
		}
	}
	printf("%d, %d\n", res0, res1);
}
