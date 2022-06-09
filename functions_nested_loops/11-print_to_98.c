#include "main.h"

/**
 * print_to_98 - prints
 *@n: input
 */

void print_to_98(int n)
{
	do{
		_putchar(n + '0');
		if( n < 98)
		{
			n++;
			_putchar(',');
			_putchar(' ');
		}
		else if (n > 98)
		{
			n--;
			_putchar(',');
			_putchar(' ');
		}
	} while(n != 98);
}
