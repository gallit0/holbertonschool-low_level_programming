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
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);

	p = malloc(n + (strlen(s1)));
	if (p == NULL)
		return (0);
	for (i = 0; s1[i]; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; p[i]; i++, j++)
	{
		p[i] = s2[j];
	}
	return (p);
}
