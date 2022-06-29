#include "main.h"

/**
 * print_name - function pointer that prints name
 * @name: string
 * @f: pointer
 */

void print_name(char *name, void (*f)(char *))
{
	int i = 0;

	while (name[i])
	{
		_putchar(name[i]);
		i++;
	}
}
