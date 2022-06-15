#include "main.h"

/**
 * print_array - print an array until n
 * @a: array
 * @n: number
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n--)
		{
			printf(", ");
		}
	}
	putchar(10);
}
