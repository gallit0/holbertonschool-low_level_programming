#include "variadic_functions.h"
#include <string.h>

/**
 * p_char - print
 * @ptr: arg
 */
void p_char(va_list ptr)
{
	printf("%c", va_arg(ptr, char))
}
/**
 * p_int - print
 * @ptr: arg
 */
void p_int(va_list ptr)
{
	printf("%d", va_arg(ptr, int));
}
/**
 * p_float - print
 * @ptr: arg
 */
void p_float(va_list ptr)
{
	printf("%f", va_arg(ptr, double))
}
/**
 * p_string - print
 * @ptr: arg
 */
void print_string(va_list ptr)
{
	char *s;

	s = va_arg(ptr, char *);
	if (!s)
	{
		printf("%p", s);
		return;
	}
	printf("%s", s);
}

/**
 * print_all - print anything
 * @format: string
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	int i = 0, j = 0;
	char *sep = "";

	data dat[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string},
	};

	va_start(ptr, format);

	while (format[i])
	{
		while (j < 4)
		{
			if (*dat[j].type == format[i])
			{
				printf("%s", sep);
				dat[j].f(ptr);
				sep = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
}
