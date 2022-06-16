#include "main.h"

/**
 * cap_string - capitalize
 * @str: string
 * Return: str
 */

char *cap_string(char *str)
{
	int i;
	int prev;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	for (i = 1; str[i] != 0; i++)
	{
		prev = i - 1;
		if (str[prev] == {' ', ',', '.', '!', '?', '"', '(', 41, '{', 125, 10 } && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
