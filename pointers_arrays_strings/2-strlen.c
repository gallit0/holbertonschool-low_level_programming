#include "main.h"

/**
 * _strlen - lenght of string
 * @s: string
 * @i - iterations
 */

int _strlen(char *s)
{
	int unsigned i = 0;
	char check;

	do {
		check = *(s + i);
		i++
	} while (check != '\0')
	return (check);
}
