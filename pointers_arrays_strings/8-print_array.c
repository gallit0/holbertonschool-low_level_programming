#include "main.h"

/**
 * print_array - print an array until n
 * @a: array
 * @n: number
 */

void print_array(int *a, int n)
{
	int i;

	for ( i = 0; i < n; i++)
	{
		putchar(*a[i]);
	}
	putchar(10);
}
