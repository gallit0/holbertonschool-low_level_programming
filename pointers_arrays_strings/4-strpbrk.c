#include "main.h"

/**
 * _strpbrk - my own strpbrk
 * @s: string
 * @accept: string
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	if ((*s == 0) || (*accept == 0))
		return (0);
	do {
		if (_strchr(*s, accept))
				return (s);
	} while (*s++);
	return (0);
}
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (0);
}
