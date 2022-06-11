#include "main.h"

/**
 * print_triangle - print a traingle shape
 * @size: size of the shape
 * @height - height of the shape
 * #width - width of the shape
 */

void print_triangle(int size)
{
	int height, width;

	if (size > 0)
	{
		for (height = 1; height < size; height++)
		{
			for (width = 1; width < size; width++)
			{
				if (width <= height)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
