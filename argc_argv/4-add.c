#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print addition
 * @argc: argc
 * @argv: argv
 * Return: 0 or 1 if error;
 */

int main(int argc, char **argv)
{
	int res = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
