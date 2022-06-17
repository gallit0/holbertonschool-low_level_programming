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
		do{
			if (*s == *accept)
			{
				return (s);
			}
		} while (*accept++);
	} while (*s++);
	return (0);
}
