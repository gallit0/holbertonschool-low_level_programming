#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - print anything
 * @str: string
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	int i = 0;
	int len = 5;

	va_start(ptr, format);
	while(format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c, ", va_arg(ptr, int));
				break;
			case 'i':
				printf("%d, ", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f, ", va_arg(ptr, double));
				break;
			case 's':
				printf("%s, ", va_arg(ptr, char *));
				break;
			default:
				break;
		}
		i++;
	}
	va_end(ptr);
	putchar(10);
}
