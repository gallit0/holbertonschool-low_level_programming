#include "main.h"


void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; < size; j++)
			{
				_putchar('#');
			}
			putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
