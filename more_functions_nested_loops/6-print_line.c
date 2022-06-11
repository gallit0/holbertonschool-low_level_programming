#include "main.h"

/**
 * print_line - print straight line
 * @n: number
 * @i - iterations
 */

void print_line(int n)
{
	int i = 0;

	while (i != n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar(10);
}
