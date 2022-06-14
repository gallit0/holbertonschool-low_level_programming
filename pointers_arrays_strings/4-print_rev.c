#include "main.h"


void print_rev(char *s)
{
	int i;
	int length = _strlen(s);

        for (i = length; i >= 0; i--)
	{	
	        putchar(*(str + i));
	}
	putchar('10');
}
