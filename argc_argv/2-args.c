#include <stdio.h>

/**
 * main - print arguments
 * @argc: argc
 * @argv: argv
 * Return: 0;
 */

int main(int argc, char **argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%d\n", argv[i]);
	return (0);
}
