#include "main.h"

/**
 * puts2 - put even characters
 * @str: string
 */

void puts2(char *str)
{
	int i;
	int l = strlen(str);

	for (i = 0; l < l; i += 2)
	{
		putchar((str[i]));
	}
	putchar(10);
}
