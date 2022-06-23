#include "main.h"

/**
 * str_concat - concatenate strings
 * @s1: string
 * @s2: string
 * Return:string
 */

char *str_concat(char *s1, char *s2)
{
	int sLen = 0;
	int i, j;
	char *str;

	sLen = strlen(s1);
	sLen += strlen(s2);

	str = malloc(sizeof(char) * sLen);
	if (str == NULL)
		return (0);
	for (i = 0; s1[i]; i++)
	{
		*(str + i) = *(s1 + i);
	}
	for (j = 0; s2[i]; i++, j++)
	{
		*(str + i) = *(s2 + j);
	}
	return (str);
}
