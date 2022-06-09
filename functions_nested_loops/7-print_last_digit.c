#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints last digit off of a number
 * @r: number
 * Return: value
 */

int print_last_digit(int r)
{
	r = _abs(r);
	r = r % 10;
	return(r);
}
