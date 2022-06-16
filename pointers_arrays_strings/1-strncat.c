#include "main.h"

/**
 * _strncat - concatenate
 * @dest: string
 * @src: string
 * @n: number
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destTotalChars = strlen(dest);
	int totalChars = destTotalChars + (strlen(src));
	int i;
	int j = 0;

	for (i = destTotalChars; i <= totalChars && i < n; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
