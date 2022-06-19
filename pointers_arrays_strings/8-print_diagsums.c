#include "main.h"

/**
 * print_diagsums - print sum of two diagonals
 * @a: int
 * @size: int
 */

void print_diagsums(int **a, int size)
{
	int i;
	int j;
	int result0 = 0;
	int result1 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				result0 += a[i][j];
		}
	}
	for (i = size - 1; i >= 0; i--)
	{
		for (j = size - 1; j >= 0; j--)
		{
			if (i == j)
				result1 += a[i][j];
		}
	}
	printf("%d, %d", result0, result1);
}
