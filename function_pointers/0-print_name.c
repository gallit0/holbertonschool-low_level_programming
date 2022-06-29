#include "function_pointers.h"

/**
 * print_name - function pointer that prints name
 * @name: string
 * @f: pointer
 */

void print_name(char *name, void (*f)(char *)__attribute__((unused)))
{
	int i = 0;

	while (name[i])
	{
		_putchar(name[i]);
		i++;
	}
}
