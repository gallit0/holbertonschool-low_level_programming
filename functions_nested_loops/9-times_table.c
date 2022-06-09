#include "main.h"

/**
 * times_table - time table
 * @filas - rows
 * @columnas - columns
 * @num -number
 */


void times_table(void)
{
	int filas;
	int columnas;
	int num = 0;

	for (filas = 0; filas < 10; filas++)
	{
		_putchar(0+ '0');
		_putchar(',');
		_putchar(' ');
		for (columnas = 1; columnas < 10; columnas++)
		{
			num = filas * columnas;
			if ((num / 10) != 0)
			{
				if (columnas != 0)
				{
					_putchar((num / 10) + '0');
				}
			}
			else{
				_putchar(' ');
			}
			_putchar((num % 10) + '0');

			if (columnas < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
