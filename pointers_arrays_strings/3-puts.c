#include "main.h"

/**
 * _puts - print string
 * @str: string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(*str); i++)
	{
		putchar(*(str + i));
	}
}
