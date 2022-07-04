#include "main.h"
/**
 * print_numbers - numbers from 0 to 9
 * @i - iterations
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar(10);
}
