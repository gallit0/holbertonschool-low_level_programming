#include "main.c"

/**
 * _strlen - lenght of string
 * @s: string
 * @i - iterations
 */

int _strlen(char *s)
{
	int i = 0;

	do {
		i++;
	} while (*s[i] != '\0');
	return (i);
}
