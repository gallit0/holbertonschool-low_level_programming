#include <stdio.h>

/**
 * main - print current file name
 * @argc: argc
 * @argv: argv
 * Return: 0;
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc - 1; i++)
	{
		printf("%s", argv[i]);        
	}
	printf("\n");
	return (0);
}
