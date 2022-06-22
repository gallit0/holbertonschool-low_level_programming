#include "main.h"

/**
 * _strdup - return pointer to allocated memory
 * @str: string
 * Return:char
 */

char *_strdup(char *str[])
{
	int sizeStr = strlen(str);
	char *str2;
	int i;

	if (str == NULL)
		return (0);
	str2 = malloc(sizeStr);
	
	if (str2 == NULL)
		return (0);
	for (i = 0; i < sizeStr; i++)
	{
		str2[i] = str[i];
	}
	free(str);
	return (str2);
}
