#include <stdio.h>
/**
 *main - print alphabet
 *Return: 0
 */


int main (void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	putchar(10);

	return (0);
}
