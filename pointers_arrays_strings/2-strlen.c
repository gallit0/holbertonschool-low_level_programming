#include "main.h"

/**
 * _strlen - lenght of string
 * @s: string
 * @i - iterations
 */

int _strlen(char *s)
{
	int i = 0;

	while ((*s[i]) != '\0')
	{
		i++;
	}
	return (i);
}
