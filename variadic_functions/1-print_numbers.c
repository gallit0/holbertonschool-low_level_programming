#include "variadic_functions"

/**
 * print_numbers - print numbers followed by nl
 * @separator: string
 * @n: int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%s%d", separator, va_arg(ptr, int));
	}
	va_end(ptr);
}
