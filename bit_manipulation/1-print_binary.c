#include "main.h"

/**
 * print_binary - print a number un base 2
 * @n: number
 */

void print_binary(unsigned long int n)
{
	if (n < 2)
	{
		putchar(n + '0');
		return;
	}
	print_binary(n / 2);
	putchar('0' + n % 2);
}
