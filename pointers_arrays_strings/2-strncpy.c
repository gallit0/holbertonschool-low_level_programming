#include "main.h"

/**
 * _strncpy - string copy
 *@dest: string
 *@src: string
 *@n: number
 *Return: dest
 */ 

char *_strncpy(char *dest, char *src, int n)
{
	int destTotalChars = strlen(dest);
	int totalChars = destTotalChars + (strlen(src));
	int i;
	int j = 0;

	if (destTotalChars < n)
	{
		for (i = n; dest[i] != 0; i++)
		{
			dest[i] = 0;
		}
	}
	else if
	{
		for (i = destTotalChars; j < n && i < totalChars; i++)
		{
			dest[i] = src[j];
			j++;
		}
	}
	return (dest);	
}
