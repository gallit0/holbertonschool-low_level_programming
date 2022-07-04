#include "main.h"

/**
 * print_array - print an array until n
 * @a: array
 * @n: number
 */

void print_array(int *a, int n)
{
	int i;
	int limit = n - 1;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < limit)
		{
			printf(", ");
		}
	}
	putchar(10);
}
