#include "main.h"

/**
 * _puts - print string
 * @str: string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\n'; i++)
	{
		putchar(*(str + i));
	}
}
