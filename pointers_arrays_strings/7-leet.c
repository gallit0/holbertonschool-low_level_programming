#include "main.h"

/**
 * leet - transform string into leet
 * @str: string
 * Return: str
 */

char *leet(char *str)
{
	int i, j;
	char str2[] = "aeotl";
	char arr[] = "43071";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str2[j] == str[i] || (str2[j] - 32) == str[i])
			{
				str[i] = arr[j];
				break;
			}
		}
	}
}
