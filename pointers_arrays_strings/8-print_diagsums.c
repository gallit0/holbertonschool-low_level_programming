#include "main.h"

/**
 * print_diagsums - print sum of two diagonals
 * @a: int
 * @size: int
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j = size - 1;
	int result0 = 0;
	int result1 = 0;

	for (i = 0; i < size; i++, j--)
	{
		result0 = result0 + a[i][i];
		result1 = result1 + a[j][j];
	}
	printf("%d, %d", result0, result1);
}
