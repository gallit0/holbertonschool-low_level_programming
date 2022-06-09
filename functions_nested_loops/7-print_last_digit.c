#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints last digit off of a number
 * @r: number
 * Return: value
 */

int print_last_digit(int r)
{
	digit = _abs(r);
	digit = digit % 10;
	return (digit);
}
