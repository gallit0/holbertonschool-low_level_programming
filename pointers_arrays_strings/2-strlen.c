#include "main.h"

/**
 * _strlen - lenght of string
 * @s: string
 * @i - iterations
 */

int _strlen(char *s)
{
	int unsigned i = 0;

	while (*(s[i]) != '\0')
	{
		i++;
	}
	return (i);
}
