#include "main.h"
#include <string.h>

/**
 * print_rev - print reversed string
 * @s: string
 */

void print_rev(char *s)
{
	int lenght = strlen(s);
	int i = lenght - 1;

	while (i > -1)
	{
		 _putchar(*(s + i));
		 i--;
	}
	_putchar(10);
}
