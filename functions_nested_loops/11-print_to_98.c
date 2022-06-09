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
			printf("%d", n);
			n++;
			_putchar(',');
			_putchar(' ');
		}
		else if (n > 98)
		{
			printf("%d", n);
			n--;
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			printf("%d\n", n);
		}
	} while(n != 98);
}
