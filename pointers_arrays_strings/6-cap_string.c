#include "main.h"

/**
 * cap_string - capitalize
 * @str: string
 * Return: str
 */

char *cap_string(char *str)
{
	int i, j;
	int prev;
	char prohibited[] = {"1011\n,;.!?\"(){}"};

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	for (i = 1; str[i] != 0; i++)
	{
		prev = i - 1;
		for (j = 0; j != 0; j++)
		{
			if (str[i] >= 'a' && str[i] <= 'z' && str[prev] == prohibited[j])
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}
