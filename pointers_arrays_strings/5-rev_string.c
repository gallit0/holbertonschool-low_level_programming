#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 */

void rev_string(char *s)
{
	int lenght = strlen(s);
	int j = lenght - 1;
	int i;
	char temp;

	for (i = 0; i < lenght; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
		j--;
	}
}
