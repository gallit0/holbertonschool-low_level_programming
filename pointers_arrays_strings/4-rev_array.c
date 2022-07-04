#include "main.h"

/**
 * reverse_array - reverse an array with n
 * @a: array
 * @n: number
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int limit = (n + 1) / 2;
	int j = n - 1;

	for (i = 0; i < limit; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j--] = temp;
	}
}
