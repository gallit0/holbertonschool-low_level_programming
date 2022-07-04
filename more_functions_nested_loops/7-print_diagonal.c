#include "main.h"
/**
 * print_diagonal - print a diagonal line
 * @i - iterations
 * @j - iterations
 * @n: number
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	while (i != n && n > 0)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar(10);
		i++;
	}
	if (n <= 0)
	{
		_putchar(10);
	}
}
