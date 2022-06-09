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
		}
		else if (n > 98)
		{
			n--;
		}
	} while(n != 98);
}
