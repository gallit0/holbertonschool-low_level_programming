#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: argc
 * @argv: argv
 * Return: 0;
 */

int main(int argc, char **argv __attribute__((unused)))
{
	int i;

	for (i = 1; i < argc; i++)
	{
	}
	i--;
	printf("%d\n", i);
	return (0);
}
