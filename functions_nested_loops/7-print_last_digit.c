#include "main.h"

/**
 * print_last_digit - prints last digit off of a number
 * @r: number
 * Return: value
 */

int print_last_digit(int r)
{
	int digit = _abs(r);
	digit = digit % 10;
	return(digit);
}
