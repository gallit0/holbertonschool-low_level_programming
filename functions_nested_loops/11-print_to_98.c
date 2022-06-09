#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints
 *@n: input
 */

void print_to_98(int n)
{
	int i = n;
	do{
		if( i < 98)
		{
			printf("%d, ", i);
			i++;
		}
		else if (i > 98)
		{
			printf("%d, ", i);
			i--;
		}
		else
		{
			printf("%d\n", i);
		}
	} while(i != 98);
}
