#include "main.h"

/**
 * print_diagsums - print sum of two diagonals
 * @a: int
 * @size: int
 */

void print_diagsums(int **a, int size)
{
	int i = 0;
	int j = size - 1;
	unsigned int res0 = 0;
	unsigned int res1 = 0;

	for (; i < size; i++)
	{
		res0 += a[i][i];
		res1 += a[j][j];
		j--;
	}
	printf("%d, %d\n", res0, res1);
}
