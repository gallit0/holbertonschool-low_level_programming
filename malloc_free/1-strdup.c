#include "main.h"

/**
 * _strdup - return pointer to allocated memory
 * @str: string
 * Return:char
 */

char *_strdup(char *str)
{
	char *str2;

	if (str == NULL)
		return (0);
	str2 = malloc(sizeStr + 1);
	
	if (str2 == NULL)
		return (0);
	while (*str)
	{
		*str2++ = *str++;
	}
	str2[i] = 0;
	free(str);
	return (str2);
}
