#include "main.h"

/**
 * times_table - time table
 * @filas - rows
 * @columnas - columns
 * @num -number
 */


void times_table(void)
{
	int filas, columnas; num;
	
	for (filas = 0; filas < 10; filas++)
	{
		for (columnas = 0; columnas < 10; columnas++)
		{
			num = filas * columnas;
			if ((num / 10) != 0)
			{
				_putchar((num / 10) + '0');
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
		putchar(10);
	}
}
