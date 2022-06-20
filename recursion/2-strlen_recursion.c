#include "main.h"

/**
 * _strlen_recursion - string length with recursion
 * @s: string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		_strlen_recursion(s++);
	}
	return (i);
}
