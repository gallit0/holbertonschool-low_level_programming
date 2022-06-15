#include "main.h"

/**
 * puts_half - print half of string
 * @str: string
 */

void puts_half(char *str)
{
	int length_of_the_string = strlen(str);
	int n;

	if (lenght_of_the_string % 2 == 0)
	{
		n = (length_of_the_string - 1) / 2;
	}
	else
	{
		n = lenght_of_the_strin / 2;
	}
	for (; n < lenght_of_the_string; n++)
	{
		*str[n];
	}
	putchar(10);
}
