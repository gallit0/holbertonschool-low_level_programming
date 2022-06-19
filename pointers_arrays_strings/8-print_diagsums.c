#include "main.h"

/**
 * print_diagsums - print sum of two diagonals
 * @a: int
 * @size: int
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int result0 = 0;
	int result1 = 0;

	for (; i < size; i++)
	{
		for (; j < size; j++)
		{
			if (i == j)
				result0 += (*((int *)a + i * size + j));
			if (j == (size - 1 - i))
				result1 += (*((int *)a + i * size + j));
		}
	}
	printf("%d, %d\n", result0, result1);
}
