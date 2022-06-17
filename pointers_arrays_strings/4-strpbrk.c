#include "main.h"

/**
 * _strpbrk - my own strpbrk
 * @s: string
 * @accept: string
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	do {
		if (*s == *accept)
			break;
	} while (*s++);
	return (s);
}
