#include "main.h"

/**
 * puts_half - print half of string
 * @str: string
 */

void puts_half(char *str)
{
	int length_of_the_string = strlen(str);
	int n;

	if (length_of_the_string % 2 == 0)
	{
		n = (length_of_the_string - 1) / 2;
	}
	else
	{
		n = length_of_the_string / 2;
	}
	for (; n < length_of_the_string; n++)
	{
		putchar(*(str[n]));
	}
	putchar(10);
}
