#include "main.h"

/**
 * _islower - checks whether its lower or not
 *@c: character
 *Return: 0 if upper
 *Return: 1 if lower
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
