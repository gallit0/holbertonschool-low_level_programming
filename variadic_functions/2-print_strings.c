#include "variadic_functions.h"

/**
 * print_strings - print a string :p
 * @separator: string
 * @n: unsigned int
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (separator == NULL)
		separator = "";

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ptr) == null)
			printf("(nil)");
		else
			printf("%s", va_arg(ptr, char *));
		if (i != (n - 1))
			printf("%s", separator);
	}
	putchar(10);
	va_end(ptr);
}
