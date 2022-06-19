#include "main.h"

/**
 * print_diagsums - print sum of two diagonals
 * @a: int
 * @size: int
 */

void print_diagsums(int ***a, int size)
{
	int i = 0;
	int j = --size;
	int result0 = 0;
	int result1 = 0;

	for (; i < size; i++, j--)
	{
		result0 += a[i][i];
		result1 += a[j][j];
	}
	printf("%d, %d", result0, result1);
}
