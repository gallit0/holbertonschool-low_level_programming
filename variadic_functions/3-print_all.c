#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - print anything
 * @format: string
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	int i = 0;
	int len;

	if (format == NULL)
	{
		putchar(10);
		return;
	}
	len = strlen(format);
	va_start(ptr, format);
	while (i < len)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 's':
				printf("%p", va_arg(ptr, char *));
				break;
			default:
				i++;
				continue;
		}
		if (i != (len - 1))
			printf(", ");
		i++;
	}
	va_end(ptr);
	putchar(10);
}
