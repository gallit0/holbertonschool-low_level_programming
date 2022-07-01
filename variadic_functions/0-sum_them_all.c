#include "variadic_functions.h"

/**
 * sum_them_all - sum all numbers
 * @n: number of variables
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int res = 0;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		res += va_arg(ptr, int);
	}
	va_end(ptr);
	return (res);
}
