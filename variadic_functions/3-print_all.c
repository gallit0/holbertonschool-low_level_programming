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
		print(format[i], va_arg);
		if (i != (len - 1))
		{
			printf(", ");
		}
		i++;
	}
	va_end(ptr);
	putchar(10);
}

/**
 * print - prints
 * @format: char
 */

void print(char format, ...)
{
	va_list word;

	va_start(word, 1);
	switch (format)
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
}
