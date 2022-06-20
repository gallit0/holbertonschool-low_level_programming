#include "main.h"

/**
 * _puts_recursion - puts using recursion
 * @s: string
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s)
		_puts_recursion(s);
	else
		_putchar(10);
}
