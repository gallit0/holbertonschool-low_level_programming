#include "main.h"

/**
 * puts2 - put even characters
 * @str: string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; *(str[i]) != 0; i++)
	{
		if (*(str[i]) % 2 == 0)
		{
			putchar(*(str[i]) + '0');
		}
	}
	putchar(10);
}
