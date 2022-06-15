#include "main.h"

/**
 * puts2 - put even characters
 * @str: string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; (str[i]) != '\0'; i += 2)
	{
		putchar((str[i]));
	}
	putchar(10);
}
