#include "main.h"

/**
 * _strpbrk - my own strpbrk
 * @s: string
 * @accept: string
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	do {
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				break;
		}
	} while (*s++);
	return (s);
}
