#include "main.h"

/**
 * string_nconcat - string concatenate
 * @s1: string
 * @s2: string
 * @n: int
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);

	p = malloc(n + (strlen(s1)));
	if (p == NULL)
		return (0);

	while (*s1)
	{
		*p = *s1;
		s1++;
		p++;
	}
	while (*s2)
	{
		*p = *s2;
		s2++;
		p++;
	}
	return (p);
}
