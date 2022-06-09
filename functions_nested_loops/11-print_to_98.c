#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints
 *@n: input
 */

void print_to_98(int n)
{
	do{
		printf("%d", n); 
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
