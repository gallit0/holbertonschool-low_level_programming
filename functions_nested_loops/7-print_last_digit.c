#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints last digit off of a number
 * @r: number
 * Return: value
 */

int print_last_digit(int r)
{
	int digit = _abs(r);
	digit = digit % 10;
	_putchar(digit + '0');
	return (digit);
}
