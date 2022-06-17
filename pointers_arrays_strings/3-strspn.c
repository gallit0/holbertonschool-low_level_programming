#include "main.h"

/**
 * _strspn - string prefix substring
 * @s: string
 * @accept: string
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; s[j]; j++)
		{
			if (s[j] == accept[i])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}
