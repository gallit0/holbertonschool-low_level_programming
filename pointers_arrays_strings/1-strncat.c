#include "main.h"



char *_strncat(char *dest, char *src, int n)
{
	int destTotalChars = strlen(dest);
	int i;
	int j = 0;

	for (i = destTotalChars; i < n; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);	
}
