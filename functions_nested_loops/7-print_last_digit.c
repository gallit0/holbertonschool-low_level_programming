#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints last digit off of a number
 * @r: number
 * Return: value
 */

int print_last_digit(int r)
{
	int digit = r % 10;

	if (r < 0)
	{
		digit *= -1;
	}
	 _putchar(digit + '0');
	return (digit);
}
