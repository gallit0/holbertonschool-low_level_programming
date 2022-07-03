#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - print anything
 * @str: string
 */

void print_all(const char * const format, ...)
{
	va_list ptr;

	va_start(ptr, strlen(format));
	while(*format)
	{
		switch (*format)
		{
			case 'c':
				printf("%c, ", va_arg(ptr, char));
				break;
			case 'i':
				printf("%d, ", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f, ", va_arg(ptr, float));
				break;
			case 's':
				printf("%p, ", va_arg(ptr, char *));
				break;
			default:
				break;
		}
		format++;
	}
	va_end(ptr);
	putchar(10);
}
