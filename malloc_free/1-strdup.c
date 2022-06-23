#include "main.h"

/**
 * _strdup - return pointer to allocated memory
 * @str: string
 * Return:char
 */

char *_strdup(char *str)
{
	int sizeStr = strlen(str);
	char *str2;
	int i = 0;

	if (str == NULL)
		return (0);
	str2 = malloc(sizeStr + 1);
	
	if (str2 == NULL)
		return (0);
	while (i < sizeStr)
	{
		*(str2 + i) = *(str + i);
		i++;
	}
	*(str2 + i) = '\0';
	free(str);
	return (str2);
}
