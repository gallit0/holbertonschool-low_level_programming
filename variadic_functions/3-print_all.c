#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - print anything
 * @format: string
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	va_list ptr2;
	va_list ptr3;
	int i = 0;
	len = strlen(format);

	va_start(ptr, format);
	va_start(ptr2, format);
	va_start(ptr3, format);
	for (; i < len; i++)
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
				printf("%s", va_arg(ptr, char *));
				break;
			default:
				break;
		}
		if(i != (len - 1))
		{
			printf(", ");
		}
	}
	va_end(ptr);
	va_end(ptr2);
	va_end(ptr3);
	putchar(10);
}
