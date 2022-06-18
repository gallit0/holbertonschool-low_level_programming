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
	while (*s)
	{
		do {
			if (*s == *accept)
				s++;
				return (s);
		}while (*accept++);
		s++;
	}
	return (0);
}
