#include "main.h"
#include <string.h>

/**
 * print_rev - print reversed string
 * @s: string
 */

void print_rev(char *s)
{
	int i;
	int length = strlen(s);

	for (i = length -1; i >= 0; i--)
	{
		 _putchar(*(s + i));
	}
	_putchar(10);
}
