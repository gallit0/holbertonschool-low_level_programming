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
	char prohibited[13];
	prohibited[0] = ' ';
	prohibited[1] = '	';
	prohibited[2] = '\n';
	prohibited[3] = ',';
	prohibited[4] = ';';
	prohibited[5] = '.';
	prohibited[6] = '!';
	prohibited[7] = '?';
	prohibited[8] = '\"';
	prohibited[9] = '(';
	prohibited[10] = ')';
	prohibited[11] = '{';
	prohibited[12] = '}';

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	for (i = 1; str[i] != 0; i++)
	{
		prev = i - 1;
		for (j = 0; prohibited[j] != 0; j++)
		{
			if (str[i] >= 'a' && str[i] <= 'z' && str[prev] == prohibited[j])
			{
				str[i] = str[i] - 32;
				break;
			}
		}
	}
	return (str);
}
